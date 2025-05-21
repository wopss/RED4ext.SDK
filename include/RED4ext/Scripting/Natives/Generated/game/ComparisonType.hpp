#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class ComparisonType : int32_t
{
    EQUAL = 0,
    NOT_EQUAL = 1,
    LESS = 2,
    GREATER = 3,
    LESS_OR_EQUAL = 4,
    GREATER_OR_EQUAL = 5,
};
} // namespace game
using gameComparisonType = game::ComparisonType;
} // namespace RED4ext

// clang-format on
