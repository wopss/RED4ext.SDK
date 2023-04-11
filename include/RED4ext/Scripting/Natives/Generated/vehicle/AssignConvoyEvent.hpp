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
struct AssignConvoyEvent : red::Event
{
    static constexpr const char* NAME = "vehicleAssignConvoyEvent";
    static constexpr const char* ALIAS = "VehicleAssignConvoyEvent";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AssignConvoyEvent, 0x50);
} // namespace vehicle
using vehicleAssignConvoyEvent = vehicle::AssignConvoyEvent;
using VehicleAssignConvoyEvent = vehicle::AssignConvoyEvent;
} // namespace RED4ext

// clang-format on
