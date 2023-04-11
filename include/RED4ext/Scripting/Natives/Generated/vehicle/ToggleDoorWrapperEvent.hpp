#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EQuestVehicleDoorState.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EVehicleDoor.hpp>

namespace RED4ext
{
namespace vehicle
{
struct ToggleDoorWrapperEvent : red::Event
{
    static constexpr const char* NAME = "vehicleToggleDoorWrapperEvent";
    static constexpr const char* ALIAS = NAME;

    vehicle::EQuestVehicleDoorState action; // 40
    vehicle::EVehicleDoor door; // 44
    bool forceScene; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(ToggleDoorWrapperEvent, 0x50);
} // namespace vehicle
using vehicleToggleDoorWrapperEvent = vehicle::ToggleDoorWrapperEvent;
} // namespace RED4ext

// clang-format on
