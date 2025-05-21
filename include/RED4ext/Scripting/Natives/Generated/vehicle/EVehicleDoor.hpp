#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace vehicle {
enum class EVehicleDoor : int32_t
{
    seat_front_left = 0,
    seat_front_right = 1,
    seat_back_left = 2,
    seat_back_right = 3,
    trunk = 4,
    hood = 5,
    count = 6,
    invalid = 7,
};
} // namespace vehicle
using vehicleEVehicleDoor = vehicle::EVehicleDoor;
using EVehicleDoor = vehicle::EVehicleDoor;
} // namespace RED4ext

// clang-format on
