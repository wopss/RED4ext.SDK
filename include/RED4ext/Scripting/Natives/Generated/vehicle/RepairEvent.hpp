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
struct RepairEvent : red::Event
{
    static constexpr const char* NAME = "vehicleRepairEvent";
    static constexpr const char* ALIAS = "VehicleRepairEvent";

};
RED4EXT_ASSERT_SIZE(RepairEvent, 0x40);
} // namespace vehicle
using vehicleRepairEvent = vehicle::RepairEvent;
using VehicleRepairEvent = vehicle::RepairEvent;
} // namespace RED4ext

// clang-format on
