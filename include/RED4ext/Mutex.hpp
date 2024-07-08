#pragma once

#include <RED4ext/Common.hpp>
#include <windows.h>

namespace RED4ext
{
struct Mutex
{
    Mutex();
    Mutex(const Mutex&) = delete;
    Mutex(Mutex&&) = delete;
    Mutex& operator=(const Mutex&) = delete;
    Mutex& operator=(Mutex&&) = delete;

    void Lock();
    void Unlock();

    // --------------------------------------------
    // -- support for lock_guard --
    // --------------------------------------------

    void lock();
    void unlock();

private:
    CRITICAL_SECTION m_cs;
};
RED4EXT_ASSERT_SIZE(Mutex, 40);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Mutex-inl.hpp>
#endif
