#pragma once

#include <cstdint>
#include <type_traits>

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/Callback.hpp>
#include <RED4ext/Memory/Allocators.hpp>

namespace RED4ext
{
constexpr size_t DefaultFixedCallbackBufferSize = 32;
constexpr size_t DefaultFlexCallbackBufferSize = 24;

template<typename R, typename... Args>
struct CallbackHandler
{
    template<typename T>
    using InvokeFunc = R (*)(T* aTarget, Args&&... aArgs);

    template<typename T>
    using CopyFunc = void (*)(T* aDst, T* aSrc);

    template<typename T>
    using MoveFunc = CopyFunc<T>;

    template<typename T>
    using DestructFunc = void (*)(T* aTarget);

    CallbackHandler(InvokeFunc<void> aInvoke, CopyFunc<void> aCopy, MoveFunc<void> aMove,
                    DestructFunc<void> aDestruct) noexcept
        : invoke(aInvoke)
        , copy(aCopy)
        , move(aMove)
        , destruct(aDestruct)
    {
    }

    template<typename T>
    CallbackHandler(InvokeFunc<T> aInvoke, CopyFunc<T> aCopy, MoveFunc<T> aMove, DestructFunc<T> aDestruct) noexcept
        : invoke(reinterpret_cast<InvokeFunc<void>>(aInvoke))
        , copy(reinterpret_cast<CopyFunc<void>>(aCopy))
        , move(reinterpret_cast<MoveFunc<void>>(aMove))
        , destruct(reinterpret_cast<DestructFunc<void>>(aDestruct))
    {
    }

    InvokeFunc<void> invoke;     // 00
    CopyFunc<void> copy;         // 08
    MoveFunc<void> move;         // 10
    DestructFunc<void> destruct; // 18
};
RED4EXT_ASSERT_SIZE(CallbackHandler<void>, 0x20);
RED4EXT_ASSERT_OFFSET(CallbackHandler<void>, invoke, 0x00);
RED4EXT_ASSERT_OFFSET(CallbackHandler<void>, copy, 0x08);
RED4EXT_ASSERT_OFFSET(CallbackHandler<void>, move, 0x10);
RED4EXT_ASSERT_OFFSET(CallbackHandler<void>, destruct, 0x18);

template<typename T, size_t InlineSize = DefaultFixedCallbackBufferSize>
class Callback;

template<typename R, typename... Args, size_t InlineSize>
class Callback<R (*)(Args...), InlineSize>
{
public:
    using HandlerPtr = CallbackHandler<R, Args...>*;

    static_assert(InlineSize >= sizeof(void*), "Buffer size can't be less than pointer size");

    Callback(R (*aFunc)(Args...)) noexcept
    {
        using TargetType = Detail::UnboundFunctionTarget<R, Args...>;

        static_assert(sizeof(TargetType) <= InlineSize, "Function size is too big for this callback");

        TargetType target{aFunc};
        InitializeHandler(&target);
    }

    template<typename C>
    Callback(C* aContext, R (C::*aFunc)(Args...)) noexcept
    {
        using TargetType = Detail::MemberFunctionTarget<C, R, Args...>;

        static_assert(sizeof(TargetType) <= InlineSize, "Function size is too big for this callback");

        TargetType target{aContext, aFunc};
        InitializeHandler(&target);
    }

    template<typename L>
    requires Detail::IsClosure<L, R, Args...>
    Callback(L&& aClosure) noexcept
    {
        using TargetType = Detail::ClosureTarget<L, R, Args...>;

        static_assert(sizeof(TargetType) <= InlineSize, "Closure size is too big for this callback");

        InitializeHandler(reinterpret_cast<TargetType*>(&aClosure));
    }

    Callback(const Callback& aOther) noexcept
    {
        CopyHandlerFrom(aOther.handler);
        CopyTargetFrom(aOther.buffer);
    }

    Callback(Callback&& aOther) noexcept
    {
        MoveHandlerFrom(aOther.handler);
        MoveTargetFrom(aOther.buffer);
    }

    ~Callback()
    {
        DestroyTarget();
        ResetHandler();
    }

    R operator()(Args&&... aArgs) const
    {
        return InvokeTarget(buffer, std::forward<Args>(aArgs)...);
    }

    uint8_t buffer[InlineSize];
    HandlerPtr handler;

private:
    template<class TargetType>
    void InitializeHandler(TargetType* aSrc) noexcept
    {
        using HandlerImpl = Detail::CallbackHandlerImpl<TargetType>;
        using HandlerFactory = Detail::CallbackHandlerFactory<HandlerImpl, R, Args...>;

        handler = HandlerFactory::Get();
        handler->copy(buffer, aSrc);
    }

    void CopyHandlerFrom(HandlerPtr aHandler) noexcept
    {
        handler = aHandler;
    }

    void MoveHandlerFrom(HandlerPtr& aHandler) noexcept
    {
        handler = aHandler;
        aHandler = nullptr;
    }

    void ResetHandler() noexcept
    {
        handler = nullptr;
    }

    R InvokeTarget(Args&&... aArgs) const
    {
        return (handler->invoke)(buffer, std::forward<Args>(aArgs)...);
    }

    void CopyTargetFrom(void* aTarget)
    {
        if (handler)
        {
            handler->copy(buffer, aTarget);
        }
    }

    void MoveTargetFrom(void* aTarget)
    {
        if (handler)
        {
            handler->move(buffer, aTarget);
        }
    }

    void DestroyTarget()
    {
        if (handler)
        {
            handler->destruct(buffer);
        }
    }
};
RED4EXT_ASSERT_SIZE(Callback<void (*)()>, DefaultFixedCallbackBufferSize + 0x8);
RED4EXT_ASSERT_OFFSET(Callback<void (*)()>, handler, DefaultFixedCallbackBufferSize);

template<typename T, size_t InlineSize = DefaultFlexCallbackBufferSize>
class FlexCallback;

template<typename R, typename... Args, size_t InlineSize>
class FlexCallback<R (*)(Args...), InlineSize>
{
public:
    using HandlerPtr = CallbackHandler<R, Args...>*;
    using AllocatorType = Memory::DefaultAllocator;

    static_assert(InlineSize >= sizeof(void*), "Buffer size can't be less than pointer size");

    FlexCallback(R (*aFunc)(Args...))
    {
        using TargetType = Detail::UnboundFunctionTarget<R, Args...>;

        TargetType target{aFunc};
        InitializeBuffer(sizeof(TargetType));
        InitializeHandler(&target);
    }

    template<typename C>
    FlexCallback(C* aContext, R (C::*aFunc)(Args...))
    {
        using TargetType = Detail::MemberFunctionTarget<C, R, Args...>;

        TargetType target{aContext, aFunc};
        InitializeBuffer(sizeof(TargetType));
        InitializeHandler(&target);
    }

    template<typename L>
    requires Detail::IsClosure<L, R, Args...>
    FlexCallback(L&& aClosure)
    {
        using TargetType = Detail::ClosureTarget<L, R, Args...>;

        InitializeBuffer(sizeof(TargetType));
        InitializeHandler(reinterpret_cast<TargetType*>(&aClosure));
    }

    FlexCallback(const FlexCallback& aOther)
    {
        InitializeBuffer(aOther.GetSize(), aOther.allocator);
        CopyHandlerFrom(aOther.handler);
        CopyTargetFrom(aOther.GetBuffer());
    }

    FlexCallback(FlexCallback&& aOther) noexcept
    {
        InitializeBuffer(aOther.GetSize(), aOther.allocator);
        MoveHandlerFrom(aOther.handler);
        MoveTargetFrom(aOther.GetBuffer());
    }

    ~FlexCallback()
    {
        DestroyTarget();
        ResetBuffer();
        ResetHandler();
    }

    R operator()(Args&&... aArgs) const
    {
        return InvokeTarget(std::forward<Args>(aArgs)...);
    }

    uint8_t buffer[InlineSize];
    HandlerPtr handler;
    Memory::IAllocator* allocator;
    uint32_t extendedSize;

protected:
    static constexpr uint32_t ExtendedFlag = 0x80000000;
    static constexpr uint32_t SizeMask = ~ExtendedFlag;

    template<class TargetType>
    void InitializeHandler(TargetType* aSrc) noexcept
    {
        using HandlerImpl = Detail::CallbackHandlerImpl<TargetType>;
        using HandlerFactory = Detail::CallbackHandlerFactory<HandlerImpl, R, Args...>;

        handler = HandlerFactory::Get();
        handler->copy(buffer, aSrc);
    }

    void CopyHandlerFrom(HandlerPtr aHandler) noexcept
    {
        handler = aHandler;
    }

    void MoveHandlerFrom(HandlerPtr& aHandler) noexcept
    {
        handler = aHandler;
        aHandler = nullptr;
    }

    void ResetHandler() noexcept
    {
        handler = nullptr;
    }

    void InitializeBuffer(uint32_t aSize)
    {
        if (aSize > InlineSize)
        {
            if (!allocator)
            {
                allocator = AllocatorType::Get();
            }

            auto bufferPtr = reinterpret_cast<void**>(buffer);
            *bufferPtr = allocator->Alloc(aSize).memory;

            extendedSize = aSize;
            extendedSize |= ExtendedFlag;
        }
        else
        {
            extendedSize = 0;
        }
    }

    void InitializeBuffer(uint32_t aSize, Memory::IAllocator* aAllocator)
    {
        allocator = aAllocator;

        InitializeBuffer(aSize);
    }

    [[nodiscard]] inline bool IsInlineMode() const noexcept
    {
        return extendedSize == 0;
    }

    [[nodiscard]] inline bool IsExtendedMode() const noexcept
    {
        return extendedSize != 0;
    }

    [[nodiscard]] inline uint32_t GetSize() const noexcept
    {
        if (IsExtendedMode())
        {
            return extendedSize & SizeMask;
        }

        return InlineSize;
    }

    [[nodiscard]] void* GetBuffer() noexcept
    {
        if (IsExtendedMode())
        {
            return *reinterpret_cast<void**>(buffer);
        }

        return buffer;
    }

    void ResetBuffer()
    {
        if (IsExtendedMode())
        {
            allocator->Free(GetBuffer());
            extendedSize = 0;
        }
    }

    inline R InvokeTarget(Args&&... aArgs) const
    {
        return (handler->invoke)(GetBuffer(), std::forward<Args>(aArgs)...);
    }

    void CopyTargetFrom(void* aOther)
    {
        if (handler)
        {
            handler->copy(GetBuffer(), aOther);
        }
    }

    void MoveTargetFrom(void* aOther)
    {
        if (handler)
        {
            handler->move(GetBuffer(), aOther);
        }
    }

    void DestroyTarget()
    {
        if (handler)
        {
            handler->destruct(GetBuffer());
        }
    }
};
RED4EXT_ASSERT_SIZE(FlexCallback<void (*)()>, DefaultFlexCallbackBufferSize + 0x18);
RED4EXT_ASSERT_OFFSET(FlexCallback<void (*)()>, extendedSize, DefaultFlexCallbackBufferSize + 0x10);
} // namespace RED4ext
