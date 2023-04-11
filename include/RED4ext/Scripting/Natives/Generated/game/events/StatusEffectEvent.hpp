#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::data { struct StatusEffect_Record; }

namespace game::events
{
struct StatusEffectEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsStatusEffectEvent";
    static constexpr const char* ALIAS = "StatusEffectEvent";

    Handle<game::data::StatusEffect_Record> staticData; // 40
    uint32_t stackCount; // 50
    uint8_t unk54[0x60 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(StatusEffectEvent, 0x60);
} // namespace game::events
using gameeventsStatusEffectEvent = game::events::StatusEffectEvent;
using StatusEffectEvent = game::events::StatusEffectEvent;
} // namespace RED4ext

// clang-format on
