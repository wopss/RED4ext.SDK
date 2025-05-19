#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class PSMLandingState : int32_t
{
    Default = 0,
    RegularLand = 1,
    HardLand = 2,
    VeryHardLand = 3,
    DeathLand = 4,
    SuperheroLand = 5,
    SuperheroLandRecovery = 6,
};
} // namespace game
using gamePSMLandingState = game::PSMLandingState;
} // namespace RED4ext

// clang-format on
