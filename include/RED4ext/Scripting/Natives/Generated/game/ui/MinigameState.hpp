#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MinigameState : IScriptable
{
    static constexpr const char* NAME = "gameuiMinigameState";
    static constexpr const char* ALIAS = "MinigameState";

    int32_t currentLives; // 40
    int32_t currentScore; // 44
};
RED4EXT_ASSERT_SIZE(MinigameState, 0x48);
} // namespace game::ui
using gameuiMinigameState = game::ui::MinigameState;
using MinigameState = game::ui::MinigameState;
} // namespace RED4ext

// clang-format on
