#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace vehicle {
enum class PlayerToAIInterpolationType : int32_t
{
    PTAIT_INSTANT = 0,
    PTAIT_LINEAR = 1,
    PTAIT_EASE_IN_QUAD = 2,
    PTAIT_EASE_IN_CUBIC = 3,
    PTAIT_EASE_OUT_CUBIC = 4,
    PTAIT_EASE_IN_OUT_CUBIC = 5,
    PTAIT_EASE_IN_QUANTIC = 6,
    PTAIT_EASE_IN_SIN = 7,
    PTAIT_EASE_OUT_SIN = 8,
    PTAIT_EASE_IN_OUT_SIN = 9,
    PTAIT_LINEAR_NON_SMOOTHED = 10,
    PTAIT_EASE_IN_QUAD_NON_SMOOTHED = 11,
    PTAIT_EASE_IN_CUBIC_NON_SMOOTHED = 12,
    PTAIT_EASE_OUT_CUBIC_NON_SMOOTHED = 13,
    PTAIT_EASE_IN_OUT_CUBIC_NON_SMOOTHED = 14,
    PTAIT_EASE_IN_QUANTIC_NON_SMOOTHED = 15,
    PTAIT_EASE_IN_SIN_NON_SMOOTHED = 16,
    PTAIT_EASE_OUT_SIN_NON_SMOOTHED = 17,
    PTAIT_EASE_IN_OUT_SIN_NON_SMOOTHED = 18,
};
} // namespace vehicle
using vehiclePlayerToAIInterpolationType = vehicle::PlayerToAIInterpolationType;
} // namespace RED4ext

// clang-format on
