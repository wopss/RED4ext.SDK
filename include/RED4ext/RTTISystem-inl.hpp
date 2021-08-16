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
