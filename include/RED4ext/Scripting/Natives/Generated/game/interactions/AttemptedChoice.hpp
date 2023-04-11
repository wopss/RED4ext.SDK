#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/Choice.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/EVisualizerType.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct AttemptedChoice
{
    static constexpr const char* NAME = "gameinteractionsAttemptedChoice";
    static constexpr const char* ALIAS = "InteractionAttemptedChoice";

    game::interactions::vis::EVisualizerType visualizerType; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    game::interactions::Choice choice; // 08
    bool isSuccess; // A8
    uint8_t unkA9[0xAC - 0xA9]; // A9
    int32_t choiceIdx; // AC
};
RED4EXT_ASSERT_SIZE(AttemptedChoice, 0xB0);
} // namespace game::interactions
using gameinteractionsAttemptedChoice = game::interactions::AttemptedChoice;
using InteractionAttemptedChoice = game::interactions::AttemptedChoice;
} // namespace RED4ext

// clang-format on
