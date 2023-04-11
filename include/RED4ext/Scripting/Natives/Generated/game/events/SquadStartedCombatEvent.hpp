#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct SquadStartedCombatEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsSquadStartedCombatEvent";
    static constexpr const char* ALIAS = NAME;

    bool started; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(SquadStartedCombatEvent, 0x48);
} // namespace game::events
using gameeventsSquadStartedCombatEvent = game::events::SquadStartedCombatEvent;
} // namespace RED4ext

// clang-format on
