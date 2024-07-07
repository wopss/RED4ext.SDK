#pragma once

#include <RED4ext/Common.hpp>
#include <windows.h>

namespace RED4ext
{
struct Mutex
{
    CRITICAL_SECTION cs;

    Mutex();
    Mutex(const Mutex&) = delete;
    Mutex(Mutex&&) = delete;
    Mutex& operator=(const Mutex&) = delete;
    Mutex& operator=(Mutex&&) = delete;

    void Lock();
    void Unlock();

    // --------------------------------------------
    // -- support for lock_guard and shared_lock --
    // --------------------------------------------

    void lock();
    void unlock();
};
RED4EXT_ASSERT_SIZE(Mutex, 40);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Mutex-inl.hpp>
#endif
