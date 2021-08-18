#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::weapon::events { 
struct CycleTriggerModeEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsCycleTriggerModeEvent";
    static constexpr const char* ALIAS = "WeaponCycleTriggerModeEvent";

};
RED4EXT_ASSERT_SIZE(CycleTriggerModeEvent, 0x40);
} // namespace game::weapon::events
using WeaponCycleTriggerModeEvent = game::weapon::events::CycleTriggerModeEvent;
} // namespace RED4ext
