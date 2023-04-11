#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace audio
{
struct VehicleTemperatureSettings
{
    static constexpr const char* NAME = "audioVehicleTemperatureSettings";
    static constexpr const char* ALIAS = NAME;

    float rpmThreshold; // 00
    float timeToActivateTemperature; // 04
    float cooldownTime; // 08
};
RED4EXT_ASSERT_SIZE(VehicleTemperatureSettings, 0xC);
} // namespace audio
using audioVehicleTemperatureSettings = audio::VehicleTemperatureSettings;
} // namespace RED4ext

// clang-format on
