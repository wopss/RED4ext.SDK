#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class TStatModifier : int8_t
{
    Constant = 0,
    Random = 1,
    Curve = 2,
    Combined = 3,
    Count = 4,
    Invalid = 5,
};
} // namespace game
using gameTStatModifier = game::TStatModifier;
} // namespace RED4ext

// clang-format on
