#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EquipParam.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ReactionState.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct ReactionEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsReactionEvent";
    static constexpr const char* ALIAS = "ReactionEvent";

    CName interactionType; // 40
    DynArray<game::EquipParam> interactionItems; // 48
    game::interactions::ReactionState state; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(ReactionEvent, 0x60);
} // namespace game::interactions
using gameinteractionsReactionEvent = game::interactions::ReactionEvent;
using ReactionEvent = game::interactions::ReactionEvent;
} // namespace RED4ext

// clang-format on
