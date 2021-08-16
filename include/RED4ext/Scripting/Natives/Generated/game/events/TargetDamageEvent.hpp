#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/events/TargetHitEvent.hpp>

namespace RED4ext
{
namespace game::events { 
struct TargetDamageEvent : game::events::TargetHitEvent
{
    static constexpr const char* NAME = "gameeventsTargetDamageEvent";
    static constexpr const char* ALIAS = "gameTargetDamageEvent";

    float damage; // F0
    uint8_t unkF4[0x100 - 0xF4]; // F4
};
RED4EXT_ASSERT_SIZE(TargetDamageEvent, 0x100);
} // namespace game::events
using gameTargetDamageEvent = game::events::TargetDamageEvent;
} // namespace RED4ext
