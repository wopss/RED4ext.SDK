#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Types/SharedMutex.hpp>
#endif

RED4EXT_INLINE bool RED4ext::SharedMutex::try_lock()
{
    return _InterlockedCompareExchange8(&state, -1, 0) == -1;
};

RED4EXT_INLINE void RED4ext::SharedMutex::lock()
{
    int32_t loopCount = 0;
    while (true)
    {
        if (try_lock())
            break;

        // The following is not required but prefered
        ++loopCount;
        if (loopCount == 0x4000)
            loopCount = 0;
        else if (!(loopCount & 511))
            SwitchToThread();
    }
};

RED4EXT_INLINE void RED4ext::SharedMutex::unlock()
{
    state = 0;
};

RED4EXT_INLINE bool RED4ext::SharedMutex::try_lock_shared()
{
    int32_t currentState = state;
    if (currentState != -1)
    {
        int32_t expectedNewState = currentState + 1;
        return _InterlockedCompareExchange8(&state, expectedNewState, currentState) == expectedNewState;
    }
    return false;
};

RED4EXT_INLINE void RED4ext::SharedMutex::lock_shared()
{
    int32_t loopCount = 0;
    while (true)
    {
        if (try_lock_shared())
            break;

        // The following is not required but prefered
        ++loopCount;
        if (loopCount == 0x4000)
            loopCount = 0;
        else if (!(loopCount & 511))
            SwitchToThread();
    }
};

RED4EXT_INLINE void RED4ext::SharedMutex::unlock_shared()
{
    _InterlockedExchangeAdd8(&state, -1);
};
