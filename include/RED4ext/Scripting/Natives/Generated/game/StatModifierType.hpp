#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class StatModifierType : int32_t
{
    Additive = 0,
    AdditiveMultiplier = 1,
    Multiplier = 2,
    Count = 3,
    Invalid = 4,
};
} // namespace game
using gameStatModifierType = game::StatModifierType;
} // namespace RED4ext

// clang-format on
