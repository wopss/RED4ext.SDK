#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/RTTISystem.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::CRTTISystem* RED4ext::CRTTISystem::Get()
{
    static UniversalRelocFunc<CRTTISystem* (*)()> func(Detail::AddressHashes::CRTTISystem_Get);
    return func();
}

RED4EXT_INLINE void RED4ext::CRTTISystem::RegisterType(CBaseRTTIType* aType)
{
    RegisterType(aType, RTTIRegistrator::GetNextId());
}

RED4EXT_INLINE void RED4ext::RTTIRegistrator::Add(CallbackFunc aRegFunc, CallbackFunc aPostRegFunc, bool aUnused)
{
    RED4EXT_UNUSED_PARAMETER(aUnused);

    if (aRegFunc)
    {
        CRTTISystem::Get()->AddRegisterCallback(aRegFunc);
    }

    if (aPostRegFunc)
    {
        CRTTISystem::Get()->AddPostRegisterCallback(aPostRegFunc);
    }
}

RED4EXT_INLINE const uint32_t RED4ext::RTTIRegistrator::GetNextId()
{
    static UniversalRelocPtr<volatile uint32_t> ptr(Detail::AddressHashes::CRTTIRegistrator_RTTIAsyncId);
    return InterlockedIncrement(ptr.GetAddr());
}
