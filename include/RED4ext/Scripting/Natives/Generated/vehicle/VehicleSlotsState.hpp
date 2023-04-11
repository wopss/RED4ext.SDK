#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EVehicleWindowState.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/VehicleDoorInteractionState.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/VehicleDoorState.hpp>

namespace RED4ext
{
namespace vehicle
{
struct VehicleSlotsState : ISerializable
{
    static constexpr const char* NAME = "vehicleVehicleSlotsState";
    static constexpr const char* ALIAS = "VehicleSlotsState";

    vehicle::VehicleDoorState vehicleDoorState; // 30
    vehicle::EVehicleWindowState vehicleWindowState; // 34
    vehicle::VehicleDoorInteractionState vehicleInteractionState; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(VehicleSlotsState, 0x40);
} // namespace vehicle
using vehicleVehicleSlotsState = vehicle::VehicleSlotsState;
using VehicleSlotsState = vehicle::VehicleSlotsState;
} // namespace RED4ext

// clang-format on
