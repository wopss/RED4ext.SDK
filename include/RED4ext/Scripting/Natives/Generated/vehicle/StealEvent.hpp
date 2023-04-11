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
struct StealEvent : red::Event
{
    static constexpr const char* NAME = "vehicleStealEvent";
    static constexpr const char* ALIAS = "StealVehicleEvent";

};
RED4EXT_ASSERT_SIZE(StealEvent, 0x40);
} // namespace vehicle
using vehicleStealEvent = vehicle::StealEvent;
using StealVehicleEvent = vehicle::StealEvent;
} // namespace RED4ext

// clang-format on
