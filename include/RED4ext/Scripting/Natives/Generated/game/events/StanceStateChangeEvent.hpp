#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/NPCStanceState.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct StanceStateChangeEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsStanceStateChangeEvent";
    static constexpr const char* ALIAS = "StanceStateChangeEvent";

    game::data::NPCStanceState state; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(StanceStateChangeEvent, 0x48);
} // namespace game::events
using gameeventsStanceStateChangeEvent = game::events::StanceStateChangeEvent;
using StanceStateChangeEvent = game::events::StanceStateChangeEvent;
} // namespace RED4ext

// clang-format on
