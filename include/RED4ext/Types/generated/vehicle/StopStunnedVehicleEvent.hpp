#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle { 
struct StopStunnedVehicleEvent : red::Event
{
    static constexpr const char* NAME = "vehicleStopStunnedVehicleEvent";
    static constexpr const char* ALIAS = "StopStunnedVehicleEvent";

};
RED4EXT_ASSERT_SIZE(StopStunnedVehicleEvent, 0x40);
} // namespace vehicle
using StopStunnedVehicleEvent = vehicle::StopStunnedVehicleEvent;
} // namespace RED4ext
