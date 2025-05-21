#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace vehicle {
enum class EVehicleSpeedConditionType : int32_t
{
    CT_EQUAL = 0,
    CT_NOT_EQUAL = 1,
    CT_GREATER = 2,
    CT_GREATER_EQUAL = 3,
    CT_LESS = 4,
    CT_LESS_EQUAL = 5,
    CT_ABS_GREATER = 6,
    CT_ABS_GREATER_EQUAL = 7,
    CT_ABS_LESS = 8,
    CT_ABS_LESS_EQUAL = 9,
};
} // namespace vehicle
using vehicleEVehicleSpeedConditionType = vehicle::EVehicleSpeedConditionType;
} // namespace RED4ext

// clang-format on
