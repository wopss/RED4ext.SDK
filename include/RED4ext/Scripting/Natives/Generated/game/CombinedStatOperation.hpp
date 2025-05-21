#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class CombinedStatOperation : int32_t
{
    Addition = 0,
    Subtraction = 1,
    Multiplication = 2,
    Division = 3,
    Modulo = 4,
    Invert = 5,
    ComplementMultiplication = 6,
    Count = 7,
    Invalid = 8,
};
} // namespace game
using gameCombinedStatOperation = game::CombinedStatOperation;
} // namespace RED4ext

// clang-format on
