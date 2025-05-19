#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace move {
enum class LineOfSightPointPreference : int32_t
{
    None = 0,
    ClosestToOwner = 1,
    ClosestToTarget = 2,
    FurthestFromTarget = 3,
};
} // namespace move
using moveLineOfSightPointPreference = move::LineOfSightPointPreference;
} // namespace RED4ext

// clang-format on
