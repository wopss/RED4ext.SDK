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
struct ReadyToParkEvent : red::Event
{
    static constexpr const char* NAME = "vehicleReadyToParkEvent";
    static constexpr const char* ALIAS = "VehicleReadyToParkEvent";

};
RED4EXT_ASSERT_SIZE(ReadyToParkEvent, 0x40);
} // namespace vehicle
using vehicleReadyToParkEvent = vehicle::ReadyToParkEvent;
using VehicleReadyToParkEvent = vehicle::ReadyToParkEvent;
} // namespace RED4ext

// clang-format on
