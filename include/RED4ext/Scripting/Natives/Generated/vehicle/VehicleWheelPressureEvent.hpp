#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct VehicleWheelPressureEvent : red::Event
{
    static constexpr const char* NAME = "vehicleVehicleWheelPressureEvent";
    static constexpr const char* ALIAS = "VehicleWheelPressureEvent";

    Vector3 contactPoint; // 40
    Vector3 impulse; // 4C
};
RED4EXT_ASSERT_SIZE(VehicleWheelPressureEvent, 0x58);
} // namespace vehicle
using vehicleVehicleWheelPressureEvent = vehicle::VehicleWheelPressureEvent;
using VehicleWheelPressureEvent = vehicle::VehicleWheelPressureEvent;
} // namespace RED4ext

// clang-format on
