#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/input/ActionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/Choice.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/InteractionBaseEvent.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct ChoiceEvent : game::interactions::InteractionBaseEvent
{
    static constexpr const char* NAME = "gameinteractionsChoiceEvent";
    static constexpr const char* ALIAS = "InteractionChoiceEvent";

    game::interactions::Choice choice; // 68
    game::input::ActionType actionType; // 108
    uint8_t unk10C[0x110 - 0x10C]; // 10C
};
RED4EXT_ASSERT_SIZE(ChoiceEvent, 0x110);
} // namespace game::interactions
using gameinteractionsChoiceEvent = game::interactions::ChoiceEvent;
using InteractionChoiceEvent = game::interactions::ChoiceEvent;
} // namespace RED4ext

// clang-format on
