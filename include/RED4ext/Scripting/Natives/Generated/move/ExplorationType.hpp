#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace move {
enum class ExplorationType : int32_t
{
    None = 0,
    Ladder = 1,
    Jump = 2,
    Climb = 3,
    Vault = 4,
    ChargedJump = 5,
    ThrusterJump = 6,
};
} // namespace move
using moveExplorationType = move::ExplorationType;
} // namespace RED4ext

// clang-format on
