#pragma once

#include <memory>

#include <RED4ext/Common.hpp>
#include <RED4ext/Memory/Utils.hpp>

namespace RED4ext
{
template<typename T>
class UniquePtr
{
public:
    UniquePtr(T* aPtr = nullptr)
        : instance(aPtr)
    {
    }

    UniquePtr(const UniquePtr&) = delete;

    UniquePtr(UniquePtr&& aOther) noexcept
    {
        instance = aOther.Release();
    }

    ~UniquePtr()
    {
        static_assert(Memory::IsDeleteCompatible<T>,
                      "UniquePtr only supports types that define the allocator type and are destructible "
                      "(a polymorphic type requires a virtual destructor)");

        if (instance)
        {
            Memory::Delete(instance);
        }
    }

    UniquePtr& operator=(const UniquePtr&) = delete;

    UniquePtr& operator=(UniquePtr&& aRhs) noexcept
    {
        UniquePtr(std::move(aRhs)).Swap(*this);
        return *this;
    }

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
        return reinterpret_cast<T*>(instance);
    }

    template<typename U>
    [[nodiscard]] U* GetPtr() const noexcept
    {
        return reinterpret_cast<U*>(instance);
    }

    T* Release() noexcept
    {
        T* released = instance;
        instance = nullptr;
        return released;
    }

    void Reset() noexcept
    {
        UniquePtr().Swap(*this);
    }

    void Reset(T* aPtr) noexcept
    {
        UniquePtr(aPtr).Swap(*this);
    }

    void Swap(UniquePtr& aOther) noexcept
    {
        std::swap(instance, aOther.instance);
    }

    T* instance;
};
RED4EXT_ASSERT_SIZE(UniquePtr<void>, 0x8);
RED4EXT_ASSERT_OFFSET(UniquePtr<void>, instance, 0x0);

template<typename T, typename... Args>
inline UniquePtr<T> MakeUnique(Args&&... args)
{
    return Memory::New<T>(std::forward<Args>(args)...);
}
} // namespace RED4ext
