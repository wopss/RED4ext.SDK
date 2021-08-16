#pragma once

#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct SpinLock
{
    // 0 : free
    // 1 : locked
    volatile char state;

    SpinLock();
    SpinLock(const SpinLock&) = delete;
    SpinLock(SpinLock&&) = delete;
    SpinLock& operator=(const SpinLock&) = delete;
    SpinLock& operator=(SpinLock&&) = delete;

    bool TryLock();
    void Lock();
    void Unlock();

    // ----------------------------
    // -- support for lock_guard --
    // ----------------------------

    bool try_lock();
    void lock();
    void unlock();
};
RED4EXT_ASSERT_SIZE(SpinLock, 1);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/SpinLock-inl.hpp>
#endif
