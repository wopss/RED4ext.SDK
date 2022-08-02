#pragma once

#include <type_traits>

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/SharedPtr.hpp>

namespace RED4ext
{
class ISerializable;

template<typename T>
class WeakHandle;

template<typename T>
class Handle : public SharedPtrWithAccess<T>
{
public:
    constexpr Handle() noexcept = default;
    constexpr Handle(std::nullptr_t) noexcept
    {
    }

    explicit Handle(ISerializable* aPtr)
    {
        RelocFunc<Handle* (*)(Handle*, ISerializable*)> ctor(Addresses::Handle_ctor);
        ctor(this, aPtr);
    }

    Handle(const Handle& aOther) noexcept
    {
        this->CopyConstructFrom(aOther);
    }

    Handle(Handle&& aRhs) noexcept
    {
        this->MoveConstructFrom(std::move(aRhs));
    }

    Handle(const WeakHandle<T>& aOther)
    {
        this->TryCopyConstructFromWeak(aOther);
    }

    ~Handle()
    {
        static_assert(std::is_base_of_v<ISerializable, T>,
                      "Handle only supports types that inherit from ISerializable.");

        if (this->DecRef() && this->instance->CanBeDestructed())
        {
            this->Destroy();
        }
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
        this->DoSwap(aOther);
    }
};
RED4EXT_ASSERT_SIZE(Handle<ISerializable>, 0x10);

template<typename T>
class WeakHandle : public WeakPtrWithAccess<T>
{
public:
    constexpr WeakHandle() noexcept = default;

    WeakHandle(const WeakHandle& aOther) noexcept
    {
        this->CopyConstructWeakFrom(aOther);
    }

    WeakHandle(const Handle<T>& aOther) noexcept
    {
        this->CopyConstructWeakFrom(aOther);
    }

    WeakHandle(WeakHandle&& aOther) noexcept
    {
        this->MoveConstructFrom(std::move(aOther));
    }

    ~WeakHandle() noexcept
    {
        static_assert(std::is_base_of_v<ISerializable, T>,
                      "WeakHandle only supports types that inherit from ISerializable.");

        this->DecWeakRef();
    }

    WeakHandle& operator=(const WeakHandle& aRhs) noexcept
    {
        WeakHandle(aRhs).swap(*this);
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
        this->DoSwap(aOther);
    }

    [[nodiscard]] Handle<T> Lock() const noexcept
    {
        return *this;
    }
};
RED4EXT_ASSERT_SIZE(WeakHandle<ISerializable>, 0x10);
} // namespace RED4ext
