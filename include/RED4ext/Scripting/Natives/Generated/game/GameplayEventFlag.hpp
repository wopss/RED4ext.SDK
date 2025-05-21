#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class GameplayEventFlag : int32_t
{
    Ai = 1,
    Trigger = 2,
    Component = 4,
    Script = 8,
};
} // namespace game
using gameGameplayEventFlag = game::GameplayEventFlag;
} // namespace RED4ext

// clang-format on
