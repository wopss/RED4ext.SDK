#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ent/EntityID.hpp>
#include <RED4ext/Types/generated/game/events/StatusEffectEvent.hpp>

namespace RED4ext
{
namespace game::events { 
struct ApplyStatusEffectEvent : game::events::StatusEffectEvent
{
    static constexpr const char* NAME = "gameeventsApplyStatusEffectEvent";
    static constexpr const char* ALIAS = "ApplyStatusEffectEvent";

    bool isNewApplication; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
    ent::EntityID instigatorEntityID; // 68
};
RED4EXT_ASSERT_SIZE(ApplyStatusEffectEvent, 0x70);
} // namespace game::events
using ApplyStatusEffectEvent = game::events::ApplyStatusEffectEvent;
} // namespace RED4ext
