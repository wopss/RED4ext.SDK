#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle { 
struct DriveJoinTrafficVehicleEvent : red::Event
{
    static constexpr const char* NAME = "vehicleDriveJoinTrafficVehicleEvent";
    static constexpr const char* ALIAS = "DriveJoinTrafficVehicleEvent";

};
RED4EXT_ASSERT_SIZE(DriveJoinTrafficVehicleEvent, 0x40);
} // namespace vehicle
using DriveJoinTrafficVehicleEvent = vehicle::DriveJoinTrafficVehicleEvent;
} // namespace RED4ext
