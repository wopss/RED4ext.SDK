#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace vehicle {
enum class SummonState : int32_t
{
    Idle = 0,
    EnRoute = 1,
    AlreadySummoned = 2,
    PathfindingFailed = 3,
    Arrived = 4,
};
} // namespace vehicle
using vehicleSummonState = vehicle::SummonState;
} // namespace RED4ext

// clang-format on
