#pragma once

#include <cstdint>
#include <type_traits>
#include <memory>
#include <tuple>

#include <Windows.h>

#include <RED4ext/Addresses.hpp>
#include <RED4ext/REDfunc.hpp>

namespace RED4ext
{
template<typename T>
class WeakHandle;

struct RefCnt
{
    volatile uint32_t strongRefs;
    volatile uint32_t weakRefs;

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
                return true;

            uses = oldUses;
        }

        return false;
    }

    // Returns true if the strong refs count reached zero.
    bool DecRef()
    {
        return InterlockedExchangeAdd(&strongRefs, -1) == 1;
    }

    void IncWeakRef()
    {
        InterlockedIncrement(&weakRefs);
    }
};

class HandleBase
{
public:
    HandleBase(const HandleBase&) = delete;

    ~HandleBase() = default;

    HandleBase& operator=(const HandleBase&) = delete;

    [[nodiscard]] uint32_t GetUseCount() const noexcept
    {
        return refCount ? refCount->strongRefs : 0;
    }

    void* instance;
    RefCnt* refCount;

protected:
    constexpr HandleBase() noexcept
        : instance(nullptr)
        , refCount(nullptr)
    {
    }

    void DoSwap(HandleBase& aOther) noexcept
    {
        std::swap(instance, aOther.instance);
        std::swap(refCount, aOther.refCount);
    }

    void MoveConstructFrom(HandleBase&& aRhs) noexcept
    {
        instance = aRhs.instance;
        refCount = aRhs.refCount;
        aRhs.instance = nullptr;
        aRhs.refCount = nullptr;
    }

    // This is here and not in RefCnt because the function we use expects a pointer to a Handle.
    void DecWeakRef()
    {
        // This function also deallocates RefCnt when weakRefs reaches 0.
        static REDfunc<void (*)(HandleBase*)> decWeakRefFn(Addresses::Handle_DecWeakRef);

        if (refCount)
        {
            decWeakRefFn(this);
        }
    }
};

template<typename T>
bool IsHandleEmpty(T)
{
    static_assert(false, "IsHandleEmpty only works for Handle of types inheriting from ISerializable");
    return false;
}

template<typename T>
void DeleteHandle(T)
{
    static_assert(false, "DeleteHandle only works for Handle of types inheriting from ISerializable");
}

template<typename T>
class Handle : public HandleBase
{
public:
    constexpr Handle() noexcept = default;
    constexpr Handle(std::nullptr_t) noexcept
    {
    }

    explicit Handle(T* aPtr)
    {
        static REDfunc<Handle* (*)(Handle*, T*)> ctor(Addresses::Handle_ctor);
        ctor(this, aPtr);
    }

    Handle(const Handle& aOther) noexcept
    {
        aOther.IncRef();
        instance = aOther.instance;
        refCount = aOther.refCount;
    }

    Handle(Handle&& aRhs) noexcept
    {
        MoveConstructFrom(std::move(aRhs));
    }

    Handle(const WeakHandle<T>& aOther)
    {
        if (!TryConstructFromWeak(aOther))
            throw std::bad_weak_ptr();
    }

    ~Handle()
    {
        DecRef();
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

    void Swap(Handle& aOther) noexcept
    {
        DoSwap(aOther);
    }

    void Reset() noexcept
    {
        Handle().swap(*this);
    }

    void Reset(T* aPtr)
    {
        Handle(aPtr).Swap(*this);
    }

    [[nodiscard]] T* GetPtr() const noexcept
    {
        return reinterpret_cast<T*>(instance);
    }

protected:
    friend class WeakHandle<T>;

    [[nodiscard]] bool TryConstructFromWeak(const WeakHandle<T>& aOther) noexcept
    {
        if (aOther.refCount && aOther.refCount->IncRefIfNotZero())
        {
            instance = aOther.instance;
            refCount = aOther.refCount;
            return true;
        }
        return false;
    }

    void IncRef() const noexcept
    {
        if (refCount)
        {
            refCount->IncRef();
        }
    }

    [[nodiscard]] bool IncRefIfNotZero() noexcept
    {
        return refCount ? refCount->IncRefIfNotZero() : false;
    }

    void DecRef() noexcept
    {
        if (refCount && refCount->DecRef())
        {
            DecWeakRef();
            if (IsHandleEmpty(*this))
            {
                DeleteHandle(*this);
                instance = nullptr;
                refCount = nullptr;
            }
        }
    }
};

template<typename T>
class WeakHandle : public HandleBase
{
public:
    constexpr WeakHandle() noexcept = default;

    WeakHandle(const WeakHandle& aOther) noexcept
    {
        WeaklyConstructFrom(aOther);
    }

    WeakHandle(const Handle<T>& aOther) noexcept
    {
        WeaklyConstructFrom(aOther);
    }

    WeakHandle(WeakHandle&& aOther) noexcept
    {
        MoveConstructFrom(std::move(aOther));
    }

    ~WeakHandle() noexcept
    {
        DecWeakRef();
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
        DoSwap(aOther);
    }

    [[nodiscard]] bool Expired() const noexcept
    {
        return GetUseCount() == 0;
    }

    [[nodiscard]] Handle<T> Lock() const noexcept
    {
        Handle<T> ret;
        std::ignore = ret.TryConstructFromWeak(*this);
        return ret;
    }

protected:
    void WeaklyConstructFrom(const HandleBase& aOther) noexcept
    {
        instance = aOther.instance;
        refCount = aOther.refCount;
        IncWeakRef();
    }

    void IncWeakRef() const noexcept
    {
        if (refCount)
        {
            refCount->IncWeakRef();
        }
    }
};
RED4EXT_ASSERT_SIZE(Handle<void>, 0x10);
RED4EXT_ASSERT_SIZE(WeakHandle<void>, 0x10);
} // namespace RED4ext
