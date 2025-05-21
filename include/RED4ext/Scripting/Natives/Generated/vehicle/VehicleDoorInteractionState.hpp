#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace vehicle {
enum class VehicleDoorInteractionState : int32_t
{
    Available = 0,
    Locked = 1,
    Disabled = 2,
    QuestLocked = 3,
    Reserved = 4,
};
} // namespace vehicle
using vehicleVehicleDoorInteractionState = vehicle::VehicleDoorInteractionState;
using VehicleDoorInteractionState = vehicle::VehicleDoorInteractionState;
} // namespace RED4ext

// clang-format on
