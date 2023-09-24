#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/DisabledReason.hpp>

namespace RED4ext
{
namespace vehicle
{
struct AIVehicleDisabledEvent : red::Event
{
    static constexpr const char* NAME = "vehicleAIVehicleDisabledEvent";
    static constexpr const char* ALIAS = "AIVehicleDisabledEvent";

    vehicle::DisabledReason reason; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AIVehicleDisabledEvent, 0x48);
} // namespace vehicle
using vehicleAIVehicleDisabledEvent = vehicle::AIVehicleDisabledEvent;
using AIVehicleDisabledEvent = vehicle::AIVehicleDisabledEvent;
} // namespace RED4ext

// clang-format on
