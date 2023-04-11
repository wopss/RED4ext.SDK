#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MinigameState.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RoachRaceGameState : game::ui::MinigameState
{
    static constexpr const char* NAME = "gameuiRoachRaceGameState";
    static constexpr const char* ALIAS = "RoachRaceGameState";

    float invincibleTime; // 48
    float pointsBonusTime; // 4C
    float speedMultiplicator; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(RoachRaceGameState, 0x58);
} // namespace game::ui
using gameuiRoachRaceGameState = game::ui::RoachRaceGameState;
using RoachRaceGameState = game::ui::RoachRaceGameState;
} // namespace RED4ext

// clang-format on
