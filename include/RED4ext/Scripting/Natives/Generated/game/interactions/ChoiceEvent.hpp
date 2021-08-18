#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/input/ActionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/Choice.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/InteractionEvent.hpp>

namespace RED4ext
{
namespace game::interactions { 
struct ChoiceEvent : game::interactions::InteractionEvent
{
    static constexpr const char* NAME = "gameinteractionsChoiceEvent";
    static constexpr const char* ALIAS = "InteractionChoiceEvent";

    game::interactions::Choice choice; // 70
    game::input::ActionType actionType; // 110
    uint8_t unk114[0x118 - 0x114]; // 114
};
RED4EXT_ASSERT_SIZE(ChoiceEvent, 0x118);
} // namespace game::interactions
using InteractionChoiceEvent = game::interactions::ChoiceEvent;
} // namespace RED4ext
