#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace audio { 
struct VehicleMultipliers
{
    static constexpr const char* NAME = "audioVehicleMultipliers";
    static constexpr const char* ALIAS = NAME;

    float throttleInputMultiplier; // 00
    float rpmMultiplier; // 04
};
RED4EXT_ASSERT_SIZE(VehicleMultipliers, 0x8);
} // namespace audio
} // namespace RED4ext
