#pragma once

#include <cstdint>

namespace RED4ext
{
struct IScriptable;

struct Ref
{
    uint32_t strongRef;
    uint32_t weakRef;
};

template<typename T>
struct Handle
{
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

    T*   instance = nullptr;
    Ref* refCount = nullptr;
};

template<typename T>
using WeakHandle = Handle<T>;
} // namespace RED4ext
