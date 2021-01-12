#pragma once

#include <windows.h>
#include <type_traits>
#include <cstdint>

namespace RED4ext
{

struct RefCnt
{
    volatile uint32_t strongRef;
    volatile uint32_t weakRef;

    bool incref_nz()
    {
        uint32_t uses = strongRef;
        while (uses != 0)
        {
            const uint32_t old_uses = InterlockedCompareExchange(&strongRef, uses + 1, uses);
            if (old_uses == uses)
                return true;
            uses = old_uses;
        }
        return false;
    }
};

template<typename T>
class Handle;

template<typename T>
class WeakHandle;


struct IScriptable;
// todo: enable_if IScriptable is base of T

template<typename T>
class HandleBase
{
protected:
    constexpr HandleBase() noexcept = default;
    ~HandleBase() = default;

public:
    HandleBase(const HandleBase&) = delete;
    HandleBase& operator=(const HandleBase&) = delete;

    [[nodiscard]] uint32_t use_count() const noexcept
    {
        return refCount ? refCount->strongRef : 0;
    }

protected:
    void do_swap(HandleBase& other) noexcept
    {
        std::swap(instance, other.instance);
        std::swap(refCount, other.refCount);
    }

    void decref() noexcept
    {
        // looks like enable_shared_from_this functions:
        static REDfunc<uint8_t (*)(HandleBase*)> esft_uk0_fn(Addresses::Handle_shared_from_this_uk0);
        static REDfunc<void (*)(HandleBase*)> esft_uk1_fn(Addresses::Handle_shared_from_this_uk1);

        if (refCount && InterlockedExchangeAdd(&refCount->strongRef, -1) == 1)
        {
            // there is a single weak ref common to all strong refs
            decwref();
            if (esft_uk0_fn(this))
            {
                esft_uk1_fn(this);
                // only for safety
                instance = nullptr;
                refCount = nullptr;
            }
        }
    }

    void incref() const noexcept
    {
        if (refCount)
        {
            InterlockedIncrement(&refCount->strongRef);
        }
    }

    void decwref()
    {
        // decrement RefCnt->weakRef and deallocates RefCnt when weakRef == 0
        static REDfunc<void (*)(HandleBase*)> decwref_fn(Addresses::Handle_decwref);

        if (refCount) // decwref_fn tests it too
        {
            decwref_fn(this);
        }
    }

    void incwref() const noexcept
    {
        if (refCount)
        {
            InterlockedIncrement(&refCount->weakRef);
        }
    }

    bool incref_nz() noexcept
    {
        return refCount ? refCount->incref_nz() : false;
    }

    void move_construct_from(HandleBase&& rhs) noexcept
    {
        instance = rhs.instance;
        refCount = rhs.refCount;
        rhs.instance = nullptr;
        rhs.refCount = nullptr;
    }

    void weakly_construct_from(const HandleBase& other) noexcept
    {
        instance = other.instance;
        refCount = other.refCount;
        incwref();
    }

    template <typename T>
    friend class WeakHandle;

    bool try_construct_from_weak(const WeakHandle<T>& other) noexcept
    {
        if (other.refCount && other.refCount->incref_nz())
        {
            instance = other.instance;
            refCount = other.refCount;
            return true;
        }
        return false;
    }

// letting this public for debugging purposes
public:
    T* instance = nullptr;
    RefCnt* refCount = nullptr;
};


template<typename T>
class Handle
    : public HandleBase<T>
{
public:
    constexpr Handle() noexcept = default;
    constexpr Handle(nullptr_t) noexcept
    {
    }

    ~Handle()
    {
        decref();
    }

    explicit Handle(T* ptr)
    {
        // todo: if T isn't IScriptable it hasn't enable_shared_from_this
        //       but we may be able to provide a pointer to a fake empty object first
        //       since the shared_from_this part seems to be skipped if *(uint64_t*)((char*)ptr + 0x16) == 0
        //       although it seems the destructor calls instance's methods that could break

        static REDfunc<Handle* (*)(Handle*, T*)> ctor_fn(Addresses::Handle_ctor_shared_from_this);
        ctor_fn(this, ptr);
    }

    Handle(const Handle& other) noexcept
    {
        other.incref();
        instance = other.instance;
        refCount = other.refCount;
    }

    Handle(Handle&& rhs) noexcept
    {
        this->move_construct_from(std::move(rhs));
    }

    Handle& operator=(const Handle& rhs) noexcept
    {
        Handle(rhs).swap(*this);
        return *this;
    }

    Handle& operator=(Handle&& rhs) noexcept
    {
        Handle(std::move(rhs)).swap(*this);
        return *this;
    }

    explicit Handle(const WeakHandle<T>& other)
    {
        if (!try_construct_from_weak(other))
            throw std::bad_weak_ptr();
    }

    void swap(Handle& other) noexcept
    {
        do_swap(other);
    }

    void reset() noexcept
    {
        Handle().swap(*this);
    }

    void reset(T* ptr)
    {
        Handle(instance).swap(*this);
    }

    template<typename U = T, std::enable_if_t<!std::is_void_v<U>, int> = 0>
    [[nodiscard]] inline U& operator*() const
    {
        return *instance;
    }

    [[nodiscard]] inline T* operator->() const
    {
        return instance;
    }

    inline operator T*() const
    {
        return instance;
    }

    T* get() const noexcept
    {
        return instance;
    }

    explicit operator bool() const noexcept
    {
        return get() != nullptr;
    }
};


template<typename T>
class WeakHandle : public HandleBase<T>
{
public:
    constexpr WeakHandle() noexcept = default;

    ~WeakHandle() noexcept
    {
        decwref();
    }

    WeakHandle(const WeakHandle& other) noexcept
    {
        weakly_construct_from(other);
    }

    WeakHandle(const Handle<T>& other) noexcept
    {
        weakly_construct_from(other);
    }

    WeakHandle(WeakHandle&& other) noexcept
    {
        move_construct_from(std::move(other));
    }

    WeakHandle& operator=(const WeakHandle& rhs) noexcept
    {
        WeakHandle(rhs).swap(*this);
        return *this;
    }

    WeakHandle& operator=(WeakHandle&& rhs) noexcept
    {
        WeakHandle(std::move(rhs)).swap(*this);
        return *this;
    }

    WeakHandle& operator=(const Handle<T>& rhs) noexcept
    {
        WeakHandle(rhs).swap(*this);
        return *this;
    }

    void reset() noexcept
    {
        WeakHandle().swap(*this);
    }

    void swap(WeakHandle& other) noexcept
    {
        do_swap(other);
    }

    [[nodiscard]] bool expired() const noexcept
    {
        return use_count() == 0;
    }

    [[nodiscard]] Handle<T> lock() const noexcept
    {
        Handle<T> ret;
        (void)ret.try_construct_from_weak(*this);
        return ret;
    }
};


RED4EXT_ASSERT_SIZE(Handle<void>, 0x10);
RED4EXT_ASSERT_SIZE(WeakHandle<void>, 0x10);

} // namespace RED4ext

