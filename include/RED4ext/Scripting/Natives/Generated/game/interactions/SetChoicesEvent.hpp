#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/Choice.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct SetChoicesEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsSetChoicesEvent";
    static constexpr const char* ALIAS = "InteractionSetChoicesEvent";

    DynArray<game::interactions::Choice> choices; // 40
    CName layer; // 50
};
RED4EXT_ASSERT_SIZE(SetChoicesEvent, 0x58);
} // namespace game::interactions
using gameinteractionsSetChoicesEvent = game::interactions::SetChoicesEvent;
using InteractionSetChoicesEvent = game::interactions::SetChoicesEvent;
} // namespace RED4ext

// clang-format on
