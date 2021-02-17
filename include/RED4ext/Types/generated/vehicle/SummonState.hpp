#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace vehicle { 
enum class SummonState : uint32_t
{
    Idle = 0,
    EnRoute = 1,
    AlreadySummoned = 2,
    PathfindingFailed = 3,
    Arrived = 4,
};
} // namespace vehicle
} // namespace RED4ext
