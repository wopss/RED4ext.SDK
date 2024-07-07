#pragma once

#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct SharedSpinLock
{
    // -1 : write
    // 0 : free
    // + : read
    volatile char state;

    SharedSpinLock();
    SharedSpinLock(const SharedSpinLock&) = delete;
    SharedSpinLock(SharedSpinLock&&) = delete;
    SharedSpinLock& operator=(const SharedSpinLock&) = delete;
    SharedSpinLock& operator=(SharedSpinLock&&) = delete;

    bool TryLock();
    void Lock();
    void Unlock();

    bool TryLockShared();
    void LockShared();
    void UnlockShared();

    // --------------------------------------------
    // -- support for lock_guard and shared_lock --
    // --------------------------------------------

    bool try_lock();
    void lock();
    void unlock();

    bool try_lock_shared();
    void lock_shared();
    void unlock_shared();
};
RED4EXT_ASSERT_SIZE(SharedSpinLock, 1);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/SharedSpinLock-inl.hpp>
#endif
