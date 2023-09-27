#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle { struct BaseObject; }

namespace vehicle
{
struct VehicleBumpEvent : red::Event
{
    static constexpr const char* NAME = "vehicleVehicleBumpEvent";
    static constexpr const char* ALIAS = "VehicleBumpEvent";

    float impactVelocityChange; // 40
    bool isInTraffic; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
    WeakHandle<vehicle::BaseObject> hitVehicle; // 48
    Vector3 hitNormal; // 58
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(VehicleBumpEvent, 0x68);
} // namespace vehicle
using vehicleVehicleBumpEvent = vehicle::VehicleBumpEvent;
using VehicleBumpEvent = vehicle::VehicleBumpEvent;
} // namespace RED4ext

// clang-format on
