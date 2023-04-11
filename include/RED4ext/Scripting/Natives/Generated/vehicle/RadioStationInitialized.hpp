#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct RadioStationInitialized : red::Event
{
    static constexpr const char* NAME = "vehicleRadioStationInitialized";
    static constexpr const char* ALIAS = "VehicleRadioStationInitialized";

};
RED4EXT_ASSERT_SIZE(RadioStationInitialized, 0x40);
} // namespace vehicle
using vehicleRadioStationInitialized = vehicle::RadioStationInitialized;
using VehicleRadioStationInitialized = vehicle::RadioStationInitialized;
} // namespace RED4ext

// clang-format on
