#pragma once
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct SharedMutex
{
    // -1 : write
    // 0 : free
    // + : read
    volatile char state = 0;

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
RED4EXT_ASSERT_SIZE(SharedMutex, 1);
}

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Types/SharedMutex-inl.hpp>
#endif
