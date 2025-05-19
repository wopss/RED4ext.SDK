#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class AITacticType : int32_t
{
    Assault = 0,
    Defend = 1,
    Flank = 2,
    Medivac = 3,
    Panic = 4,
    Regroup = 5,
    Retreat = 6,
    Snipe = 7,
    Suppress = 8,
    Count = 9,
    Invalid = 10,
};
} // namespace game::data
using gamedataAITacticType = game::data::AITacticType;
} // namespace RED4ext

// clang-format on
