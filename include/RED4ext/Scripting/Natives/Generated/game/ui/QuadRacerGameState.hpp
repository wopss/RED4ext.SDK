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
struct QuadRacerGameState : game::ui::MinigameState
{
    static constexpr const char* NAME = "gameuiQuadRacerGameState";
    static constexpr const char* ALIAS = "QuadRacerGameState";

    float speed; // 48
    float maxSpeed; // 4C
    float pointsBonusTime; // 50
    float boostTime; // 54
    float timeLeft; // 58
    int32_t lapsPassed; // 5C
    bool shouldPushBackPlayer; // 60
    bool hasPassedCheckpoint; // 61
    uint8_t unk62[0x68 - 0x62]; // 62
};
RED4EXT_ASSERT_SIZE(QuadRacerGameState, 0x68);
} // namespace game::ui
using gameuiQuadRacerGameState = game::ui::QuadRacerGameState;
using QuadRacerGameState = game::ui::QuadRacerGameState;
} // namespace RED4ext

// clang-format on
