#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/RTTISystem.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::CRTTISystem* RED4ext::CRTTISystem::Get()
{
    RelocFunc<CRTTISystem* (*)()> func(Addresses::CRTTISystem_Get);
    return func();
}

RED4EXT_INLINE void RED4ext::CRTTISystem::RegisterType(CBaseRTTIType* aType)
{
    RegisterType(aType, RTTIRegistrator::GetNextId());
}

RED4EXT_INLINE void RED4ext::RTTIRegistrator::Add(CallbackFunc aRegFunc, CallbackFunc aPostRegFunc, bool aUnused)
{
    static RTTIRegistrator instance;

    using func_t = RTTIRegistrator* (*)(RTTIRegistrator*, CallbackFunc, CallbackFunc, bool);

    RelocFunc<func_t> func(Addresses::CRTTIRegistrator_Add);
    func(&instance, aRegFunc, aPostRegFunc, aUnused);
}

RED4EXT_INLINE const uint32_t RED4ext::RTTIRegistrator::GetNextId()
{
    RelocPtr<volatile uint32_t> ptr(Addresses::CRTTIRegistrator_RTTIAsyncId);
    return InterlockedIncrement(ptr.GetAddr());
}
