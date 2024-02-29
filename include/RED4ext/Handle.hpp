#pragma once

#include <type_traits>

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Memory/SharedPtr.hpp>
#include <RED4ext/Relocation.hpp>

namespace RED4ext
{
struct ISerializable;

template<typename T>
class WeakHandle;

template<typename T>
class Handle : public SharedPtrWithAccess<T>
{
public:
    using BaseType = SharedPtrWithAccess<T>;

    constexpr Handle() noexcept = default;
    constexpr Handle(std::nullptr_t) noexcept
    {
    }

    explicit Handle(T* aPtr)
    {
        static UniversalRelocFunc<Handle* (*)(Handle*, T*)> ctor(Detail::AddressHashes::Handle_ctor);
        ctor(this, aPtr);
    }

    Handle(const Handle& aOther) noexcept
    {
        BaseType::CopyConstructFrom(aOther);
    }

    Handle(Handle&& aRhs) noexcept
    {
        BaseType::MoveConstructFrom(std::move(aRhs));
    }

    Handle(const WeakHandle<T>& aOther) noexcept
    {
        BaseType::TryCopyConstructFromWeak(aOther);
    }

    ~Handle()
    {
        static_assert(std::is_base_of_v<ISerializable, T>,
                      "Handle only supports types that inherit from ISerializable.");

        if (BaseType::DecRef() && BaseType::instance->CanBeDestructed())
        {
            BaseType::Destroy();
        }
    }

    template<typename U>
    operator const Handle<U>&() const noexcept
    {
        static_assert(std::is_base_of_v<U, T>, "Cannot conver handle because target type is incompatible.");
        return *reinterpret_cast<const Handle<U>*>(this);
    }

    template<typename U>
    operator Handle<U>&() noexcept
    {
        static_assert(std::is_base_of_v<U, T>, "Cannot conver handle because target type is incompatible.");
        return *reinterpret_cast<Handle<U>*>(this);
    }

    Handle& operator=(const Handle& aRhs) noexcept
    {
        Handle(aRhs).Swap(*this);
        return *this;
    }

    Handle& operator=(Handle&& aRhs) noexcept
    {
        Handle(std::move(aRhs)).Swap(*this);
        return *this;
    }

    void Reset() noexcept
    {
        Handle().Swap(*this);
    }

    void Reset(T* aPtr)
    {
        Handle(aPtr).Swap(*this);
    }

    void Swap(Handle& aOther) noexcept
    {
        BaseType::Swap(aOther);
    }
};
RED4EXT_ASSERT_SIZE(Handle<ISerializable>, 0x10);

template<typename T>
class WeakHandle : public WeakPtrWithAccess<T>
{
public:
    using BaseType = WeakPtrWithAccess<T>;

    constexpr WeakHandle() noexcept = default;

    WeakHandle(const WeakHandle& aOther) noexcept
    {
        BaseType::CopyConstructWeakFrom(aOther);
    }

    WeakHandle(const Handle<T>& aOther) noexcept
    {
        BaseType::CopyConstructWeakFrom(aOther);
    }

    WeakHandle(WeakHandle&& aOther) noexcept
    {
        BaseType::MoveConstructFrom(std::move(aOther));
    }

    ~WeakHandle() noexcept
    {
        static_assert(std::is_base_of_v<ISerializable, T>,
                      "WeakHandle only supports types that inherit from ISerializable.");

        BaseType::DecWeakRef();
    }

    template<typename U>
    operator const WeakHandle<U>&() const noexcept
    {
        static_assert(std::is_base_of_v<U, T>, "Cannot conver handle because target type is incompatible.");
        return *reinterpret_cast<const WeakHandle<U>*>(this);
    }

    template<typename U = T>
    operator Handle<U>() const noexcept
    {
        static_assert(std::is_base_of_v<U, T>, "Cannot conver handle because target type is incompatible.");
        return *this;
    }

    WeakHandle& operator=(const WeakHandle& aRhs) noexcept
    {
        WeakHandle(aRhs).Swap(*this);
        return *this;
    }

    WeakHandle& operator=(WeakHandle&& aRhs) noexcept
    {
        WeakHandle(std::move(aRhs)).Swap(*this);
        return *this;
    }

    WeakHandle& operator=(const Handle<T>& aRhs) noexcept
    {
        WeakHandle(aRhs).Swap(*this);
        return *this;
    }

    void Reset() noexcept
    {
        WeakHandle().Swap(*this);
    }

    void Swap(WeakHandle& aOther) noexcept
    {
        BaseType::Swap(aOther);
    }

    [[nodiscard]] Handle<T> Lock() const noexcept
    {
        return *this;
    }
};
RED4EXT_ASSERT_SIZE(WeakHandle<ISerializable>, 0x10);

template<typename T, typename... Args>
inline Handle<T> MakeHandle(Args&&... args)
{
    return Handle<T>(Memory::New<T>(std::forward<Args>(args)...));
}
} // namespace RED4ext
