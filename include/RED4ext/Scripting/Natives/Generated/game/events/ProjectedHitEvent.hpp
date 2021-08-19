#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/events/HitEvent.hpp>

namespace RED4ext
{
namespace game::events { 
struct ProjectedHitEvent : game::events::HitEvent
{
    static constexpr const char* NAME = "gameeventsProjectedHitEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ProjectedHitEvent, 0xE0);
} // namespace game::events
} // namespace RED4ext
