#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/IUpdatableSystem.hpp>
#endif

#include <RED4ext/SystemUpdate.hpp>

RED4EXT_INLINE void RED4ext::IUpdatableSystem::OnRegisterUpdates(RED4ext::UpdateRegistrar* aRegistrar)
{
    RED4EXT_UNUSED_PARAMETER(aRegistrar);
}
