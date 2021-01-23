#pragma once
#include <memory>

#include <Windows.h>

#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct SharedMutex
{
    // -1 : write
    // 0 : free
    // + : read
    volatile char state;

    bool try_lock();
    void lock();
    void unlock();

    bool try_lock_shared();
    void lock_shared();
    void unlock_shared();
};
}

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Types/SharedMutex-inl.hpp>
#endif
