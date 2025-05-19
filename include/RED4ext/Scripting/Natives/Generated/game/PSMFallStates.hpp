#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class PSMFallStates : int32_t
{
    Default = 0,
    RegularFall = 1,
    SafeFall = 2,
    FastFall = 3,
    VeryFastFall = 4,
    DeathFall = 5,
};
} // namespace game
using gamePSMFallStates = game::PSMFallStates;
} // namespace RED4ext

// clang-format on
