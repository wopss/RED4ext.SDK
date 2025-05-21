#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace vehicle {
enum class PoliceStrategy : int8_t
{
    None = 0,
    DriveTowardsPlayer = 1,
    DriveAwayFromPlayer = 2,
    PatrolNearby = 3,
    InterceptAtNextIntersection = 4,
    GetToPlayerFromAnywhere = 5,
    InitialSearch = 6,
    SearchFromAnywhere = 7,
    Count = 8,
};
} // namespace vehicle
using vehiclePoliceStrategy = vehicle::PoliceStrategy;
} // namespace RED4ext

// clang-format on
