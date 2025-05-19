#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class AIComparison : int32_t
{
    Equal = 0,
    Greater = 1,
    GreaterOrEqual = 2,
    Less = 3,
    LessOrEqual = 4,
    NotEqual = 5,
    Count = 6,
    Invalid = 7,
};
} // namespace game::data
using gamedataAIComparison = game::data::AIComparison;
} // namespace RED4ext

// clang-format on
