#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/events/HitEvent.hpp>

namespace RED4ext
{
namespace game::events { 
struct TargetHitEvent : game::events::HitEvent
{
    static constexpr const char* NAME = "gameeventsTargetHitEvent";
    static constexpr const char* ALIAS = "gameTargetHitEvent";

    uint8_t unkE0[0xF0 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(TargetHitEvent, 0xF0);
} // namespace game::events
using gameTargetHitEvent = game::events::TargetHitEvent;
} // namespace RED4ext
