#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Mutex.hpp>
#endif

RED4EXT_INLINE RED4ext::Mutex::Mutex()
{
    InitializeCriticalSection(&cs);
}

RED4EXT_INLINE void RED4ext::Mutex::Lock()
{
    EnterCriticalSection(&cs);
}

RED4EXT_INLINE void RED4ext::Mutex::Unlock()
{
    LeaveCriticalSection(&cs);
}

RED4EXT_INLINE void RED4ext::Mutex::lock()
{
    Lock();
}

RED4EXT_INLINE void RED4ext::Mutex::unlock()
{
    Unlock();
}
