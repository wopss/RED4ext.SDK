#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI {
enum class EInterruptionImportance : int32_t
{
    Undefined = 0,
    Casual = 1,
    Rush = 2,
    Immediate = 3,
    ForcedImmediate = 4,
};
} // namespace AI
using AIEInterruptionImportance = AI::EInterruptionImportance;
} // namespace RED4ext

// clang-format on
