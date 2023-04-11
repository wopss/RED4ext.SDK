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
struct VehicleStuckEvent : red::Event
{
    static constexpr const char* NAME = "vehicleVehicleStuckEvent";
    static constexpr const char* ALIAS = "VehicleStuckEvent";

};
RED4EXT_ASSERT_SIZE(VehicleStuckEvent, 0x40);
} // namespace vehicle
using vehicleVehicleStuckEvent = vehicle::VehicleStuckEvent;
using VehicleStuckEvent = vehicle::VehicleStuckEvent;
} // namespace RED4ext

// clang-format on
