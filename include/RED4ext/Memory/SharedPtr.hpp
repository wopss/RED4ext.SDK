#pragma once

#include <cstdint>
#include <memory>

#include <Windows.h>

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Memory/Utils.hpp>
#include <RED4ext/Relocation.hpp>

namespace RED4ext
{
struct RefCnt
{
    using AllocatorType = Memory::RefCountAllocator;

    constexpr RefCnt() noexcept
        : strongRefs(1)
        , weakRefs(1)
    {
    }

    void IncRef()
    {
        InterlockedIncrement(&strongRefs);
    }

    // Returns true if the strong refs count has been successfully incremented.
    bool IncRefIfNotZero()
    {
        uint32_t uses = strongRefs;
        while (uses != 0)
        {
            const uint32_t oldUses = InterlockedCompareExchange(&strongRefs, uses + 1, uses);

            if (oldUses == uses)
            {
                return true;
            }

            uses = oldUses;
        }

        return false;
    }

    // Returns true if the strong refs count reached zero.
    bool DecRef()
    {
        return InterlockedExchangeAdd(&strongRefs, static_cast<uint32_t>(-1)) == 1;
    }

    void IncWeakRef()
    {
        InterlockedIncrement(&weakRefs);
    }

    volatile uint32_t strongRefs;
    volatile uint32_t weakRefs;
};
RED4EXT_ASSERT_SIZE(RefCnt, 0x8);

template<typename T>
class SharedPtrBase
{
public:
    SharedPtrBase(const SharedPtrBase&) = delete;
    SharedPtrBase& operator=(const SharedPtrBase&) = delete;
    SharedPtrBase& operator=(SharedPtrBase&&) = delete;

    ~SharedPtrBase() noexcept = default;

    [[nodiscard]] uint32_t GetUseCount() const noexcept
    {
        return refCount ? refCount->strongRefs : 0;
    }

    T* instance;
    RefCnt* refCount;

protected:
    constexpr SharedPtrBase() noexcept
        : instance(nullptr)
        , refCount(nullptr)
    {
    }

    void Swap(SharedPtrBase& aOther) noexcept
    {
        std::swap(instance, aOther.instance);
        std::swap(refCount, aOther.refCount);
    }

    void CopyConstructFrom(const SharedPtrBase& aOther) noexcept
    {
        aOther.IncRef();
        instance = aOther.instance;
        refCount = aOther.refCount;
    }

    bool TryCopyConstructFromWeak(const SharedPtrBase& aOther) noexcept
    {
        if (aOther.IncRefIfNotZero())
        {
            instance = aOther.instance;
            refCount = aOther.refCount;
            return true;
        }

        return false;
    }

    void MoveConstructFrom(SharedPtrBase&& aOther) noexcept
    {
        instance = aOther.instance;
        refCount = aOther.refCount;
        aOther.instance = nullptr;
        aOther.refCount = nullptr;
    }

    void CopyConstructWeakFrom(const SharedPtrBase& aOther) noexcept
    {
        instance = aOther.instance;
        refCount = aOther.refCount;
        IncWeakRef();
    }

    void IncRef() const noexcept
    {
        if (refCount)
        {
            refCount->IncRef();
        }
    }

    [[nodiscard]] bool IncRefIfNotZero() const noexcept
    {
        if (refCount)
        {
            return refCount->IncRefIfNotZero();
        }

        return false;
    }

    [[nodiscard]] bool DecRef() noexcept
    {
        if (refCount && refCount->DecRef())
        {
            DecWeakRef();
            return true;
        }

        return false;
    }

    void Destroy() noexcept
    {
        Memory::Delete(instance);

        instance = nullptr;
        refCount = nullptr;
    }

    void IncWeakRef() const noexcept
    {
        if (refCount)
        {
            refCount->IncWeakRef();
        }
    }

    // This is here and not in RefCnt because the function we use expects a pointer to a SharedPtr.
    void DecWeakRef()
    {
        if (refCount)
        {
            // This function also deallocates RefCnt when weakRefs reaches 0.
            static UniversalRelocFunc<void (*)(SharedPtrBase*)> decWeakRefFn(Detail::AddressHashes::Handle_DecWeakRef);
            decWeakRefFn(this);
        }
    }
};
RED4EXT_ASSERT_SIZE(SharedPtrBase<void>, 0x10);
RED4EXT_ASSERT_OFFSET(SharedPtrBase<void>, instance, 0x00);
RED4EXT_ASSERT_OFFSET(SharedPtrBase<void>, refCount, 0x08);

template<typename T>
class SharedPtrWithAccess : public SharedPtrBase<T>
{
public:
    using BaseType = SharedPtrBase<T>;

    template<typename U = T, typename = std::enable_if_t<!std::is_void_v<U>>>
    [[nodiscard]] inline U& operator*() const
    {
        return *GetPtr();
    }

    [[nodiscard]] inline T* operator->() const
    {
        return GetPtr();
    }

    [[nodiscard]] inline operator T*() const
    {
        return GetPtr();
    }

    explicit operator bool() const noexcept
    {
        return GetPtr() != nullptr;
    }

    [[nodiscard]] T* GetPtr() const noexcept
    {
        return reinterpret_cast<T*>(BaseType::instance);
    }

    template<typename U>
    [[nodiscard]] U* GetPtr() const noexcept
    {
        return reinterpret_cast<U*>(BaseType::instance);
    }
};

template<typename T>
class WeakPtrWithAccess : public SharedPtrBase<T>
{
public:
    using BaseType = SharedPtrBase<T>;

    explicit operator bool() const noexcept
    {
        return !Expired();
    }

    [[nodiscard]] bool Expired() const noexcept
    {
        return BaseType::GetUseCount() == 0;
    }
};

template<typename T>
class WeakPtr;

template<typename T>
class SharedPtr : public SharedPtrWithAccess<T>
{
public:
    using BaseType = SharedPtrWithAccess<T>;

    constexpr SharedPtr() noexcept = default;
    constexpr SharedPtr(std::nullptr_t) noexcept
    {
    }

    explicit SharedPtr(T* aPtr) noexcept
    {
        BaseType::instance = aPtr;
        BaseType::refCount = Memory::New<RefCnt>();
    }

    SharedPtr(const SharedPtr& aOther) noexcept
    {
        BaseType::CopyConstructFrom(aOther);
    }

    SharedPtr(SharedPtr&& aRhs) noexcept
    {
        BaseType::MoveConstructFrom(std::move(aRhs));
    }

    SharedPtr(const WeakPtr<T>& aOther) noexcept
    {
        BaseType::TryCopyConstructFromWeak(aOther);
    }

    ~SharedPtr() noexcept
    {
        static_assert(Memory::IsDeleteCompatible<T>,
                      "SharedPtr only supports types that define the allocator type and are destructible "
                      "(a polymorphic type requires a virtual destructor)");

        if (BaseType::DecRef())
        {
            BaseType::Destroy();
        }
    }

    SharedPtr& operator=(const SharedPtr& aRhs) noexcept
    {
        SharedPtr(aRhs).Swap(*this);
        return *this;
    }

    SharedPtr& operator=(SharedPtr&& aRhs) noexcept
    {
        SharedPtr(std::move(aRhs)).Swap(*this);
        return *this;
    }

    void Reset() noexcept
    {
        SharedPtr().Swap(*this);
    }

    void Reset(T* aPtr) noexcept
    {
        SharedPtr(aPtr).Swap(*this);
    }

    void Swap(SharedPtr& aOther) noexcept
    {
        BaseType::Swap(aOther);
    }
};
RED4EXT_ASSERT_SIZE(SharedPtr<void*>, 0x10);

template<typename T>
class WeakPtr : public WeakPtrWithAccess<T>
{
public:
    using BaseType = WeakPtrWithAccess<T>;

    constexpr WeakPtr() noexcept = default;

    WeakPtr(const WeakPtr& aOther) noexcept
    {
        BaseType::CopyConstructWeakFrom(aOther);
    }

    WeakPtr(const SharedPtr<T>& aOther) noexcept
    {
        BaseType::CopyConstructWeakFrom(aOther);
    }

    WeakPtr(WeakPtr&& aOther) noexcept
    {
        BaseType::MoveConstructFrom(std::move(aOther));
    }

    ~WeakPtr() noexcept
    {
        BaseType::DecWeakRef();
    }

    WeakPtr& operator=(const WeakPtr& aRhs) noexcept
    {
        WeakPtr(aRhs).Swap(*this);
        return *this;
    }

    WeakPtr& operator=(WeakPtr&& aRhs) noexcept
    {
        WeakPtr(std::move(aRhs)).Swap(*this);
        return *this;
    }

    WeakPtr& operator=(const SharedPtr<T>& aRhs) noexcept
    {
        WeakPtr(aRhs).Swap(*this);
        return *this;
    }

    void Reset() noexcept
    {
        WeakPtr().Swap(*this);
    }

    void Swap(WeakPtr& aOther) noexcept
    {
        BaseType::Swap(aOther);
    }

    [[nodiscard]] SharedPtr<T> Lock() const noexcept
    {
        return *this;
    }
};
RED4EXT_ASSERT_SIZE(WeakPtr<void>, 0x10);

// clang-format off
template<typename T>
concept IsSelfReference = requires(T* t)
{
    { &t->self } -> std::same_as<WeakPtr<T>*>;
};
// clang-format on

template<typename T, typename... Args>
inline SharedPtr<T> MakeShared(Args&&... args)
{
    SharedPtr<T> instance(Memory::New<T>(std::forward<Args>(args)...));

    if constexpr (IsSelfReference<T>)
    {
        instance->self = instance;
    }

    return instance;
}
} // namespace RED4ext
