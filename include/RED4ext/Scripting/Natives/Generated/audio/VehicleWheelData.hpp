#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace audio { 
struct VehicleWheelData
{
    static constexpr const char* NAME = "audioVehicleWheelData";
    static constexpr const char* ALIAS = NAME;

    float suspensionPressureMultiplier; // 00
    float landingSuspensionPressureMultiplier; // 04
    float suspensionPressureLimit; // 08
    float minSuspensionPressureThreshold; // 0C
    float suspensionImpactCooldown; // 10
    float minWheelTimeInAirBeforeLanding; // 14
    DynArray<CName> wheelStartEvents; // 18
    DynArray<CName> wheelStopEvents; // 28
    DynArray<CName> wheelRegularSuspensionImpacts; // 38
    DynArray<CName> wheelLandingSuspensionImpacts; // 48
};
RED4EXT_ASSERT_SIZE(VehicleWheelData, 0x58);
} // namespace audio
} // namespace RED4ext
