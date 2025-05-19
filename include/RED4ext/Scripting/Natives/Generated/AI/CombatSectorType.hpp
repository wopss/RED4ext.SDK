#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI {
enum class CombatSectorType : int32_t
{
    ToBackLeft = 0,
    ToBackMid = 1,
    ToBackRight = 2,
    ToLeft = 3,
    ToMid = 4,
    ToRight = 5,
    FromLeft = 6,
    FromMid = 7,
    FromRight = 8,
    FromBackLeft = 9,
    FromBackMid = 10,
    FromBackRight = 11,
    BeyondToLeft = 12,
    BeyondToRight = 13,
    BeyondFromLeft = 14,
    BeyondFromRight = 15,
    Unknown = 16,
};
} // namespace AI
using AICombatSectorType = AI::CombatSectorType;
} // namespace RED4ext

// clang-format on
