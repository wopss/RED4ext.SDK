#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle { 
struct StunnedVehicleEvent : red::Event
{
    static constexpr const char* NAME = "vehicleStunnedVehicleEvent";
    static constexpr const char* ALIAS = "StunnedVehicleEvent";

};
RED4EXT_ASSERT_SIZE(StunnedVehicleEvent, 0x40);
} // namespace vehicle
using StunnedVehicleEvent = vehicle::StunnedVehicleEvent;
} // namespace RED4ext
