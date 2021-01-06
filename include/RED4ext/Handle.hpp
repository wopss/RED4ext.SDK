#pragma once

#include <cstdint>

namespace RED4ext
{
template<typename T>
struct Handle
{
    struct RefCount
    {
        uint32_t strongRefs;
        uint32_t weakRefs;
    };

    inline operator T*() const
    {
        return instance;
    }

    inline T& operator*() const
    {
        return *instance;
    }

    inline T* operator->() const
    {
        return instance;
    }

    inline operator bool() const
    {
        return instance;
    }

    T* instance = nullptr;
    RefCount* refCount = nullptr;
};

template<typename T>
using WeakHandle = Handle<T>;
} // namespace RED4ext
