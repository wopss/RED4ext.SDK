#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace vehicle
{
struct WheelRuntimePSData
{
    static constexpr const char* NAME = "vehicleWheelRuntimePSData";
    static constexpr const char* ALIAS = NAME;

    CName previousTouchedMaterial; // 00
    float previousVisualDisplacement; // 08
    float previousLogicalSpringCompression; // 0C
    float previousSwaybarDisplacement; // 10
    float previousDampedSpringForce; // 14
};
RED4EXT_ASSERT_SIZE(WheelRuntimePSData, 0x18);
} // namespace vehicle
using vehicleWheelRuntimePSData = vehicle::WheelRuntimePSData;
} // namespace RED4ext

// clang-format on
