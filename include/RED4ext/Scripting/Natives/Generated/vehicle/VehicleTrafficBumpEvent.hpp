#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle { 
struct VehicleTrafficBumpEvent : red::Event
{
    static constexpr const char* NAME = "vehicleVehicleTrafficBumpEvent";
    static constexpr const char* ALIAS = "VehicleTrafficBumpEvent";

    float impactVelocityChange; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(VehicleTrafficBumpEvent, 0x48);
} // namespace vehicle
using VehicleTrafficBumpEvent = vehicle::VehicleTrafficBumpEvent;
} // namespace RED4ext
