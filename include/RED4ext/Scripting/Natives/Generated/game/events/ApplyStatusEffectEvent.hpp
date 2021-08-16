#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/events/StatusEffectEvent.hpp>

namespace RED4ext
{
namespace game::events { 
struct ApplyStatusEffectEvent : game::events::StatusEffectEvent
{
    static constexpr const char* NAME = "gameeventsApplyStatusEffectEvent";
    static constexpr const char* ALIAS = "ApplyStatusEffectEvent";

    ent::EntityID instigatorEntityID; // 60
    bool isNewApplication; // 68
    bool isAppliedOnSpawn; // 69
    uint8_t unk6A[0x70 - 0x6A]; // 6A
};
RED4EXT_ASSERT_SIZE(ApplyStatusEffectEvent, 0x70);
} // namespace game::events
using ApplyStatusEffectEvent = game::events::ApplyStatusEffectEvent;
} // namespace RED4ext
