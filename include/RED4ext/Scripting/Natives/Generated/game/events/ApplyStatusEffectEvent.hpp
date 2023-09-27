#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/events/StatusEffectEvent.hpp>

namespace RED4ext
{
namespace game::events
{
struct ApplyStatusEffectEvent : game::events::StatusEffectEvent
{
    static constexpr const char* NAME = "gameeventsApplyStatusEffectEvent";
    static constexpr const char* ALIAS = "ApplyStatusEffectEvent";

    ent::EntityID instigatorEntityID; // 60
    ent::EntityID proxyEntityID; // 68
    bool isNewApplication; // 70
    bool isAppliedOnSpawn; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
};
RED4EXT_ASSERT_SIZE(ApplyStatusEffectEvent, 0x78);
} // namespace game::events
using gameeventsApplyStatusEffectEvent = game::events::ApplyStatusEffectEvent;
using ApplyStatusEffectEvent = game::events::ApplyStatusEffectEvent;
} // namespace RED4ext

// clang-format on
