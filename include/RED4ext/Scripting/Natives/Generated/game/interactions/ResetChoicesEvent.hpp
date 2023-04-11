#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct ResetChoicesEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsResetChoicesEvent";
    static constexpr const char* ALIAS = "InteractionResetChoicesEvent";

    CName layer; // 40
    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ResetChoicesEvent, 0x50);
} // namespace game::interactions
using gameinteractionsResetChoicesEvent = game::interactions::ResetChoicesEvent;
using InteractionResetChoicesEvent = game::interactions::ResetChoicesEvent;
} // namespace RED4ext

// clang-format on
