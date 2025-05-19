#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace vehicle {
enum class EQuestVehicleDoorState : int32_t
{
    ForceOpen = 0,
    ForceClose = 1,
    OpenAll = 2,
    CloseAll = 3,
    ForceLock = 4,
    ForceUnlock = 5,
    LockAll = 6,
    EnableInteraction = 7,
    DisableInteraction = 8,
    DisableAllInteractions = 9,
    ResetInteractions = 10,
    ResetVehicle = 11,
    OpenAllRegular = 12,
    QuestLock = 13,
    QuestLockAll = 14,
    Count = 15,
    Invalid = 16,
};
} // namespace vehicle
using vehicleEQuestVehicleDoorState = vehicle::EQuestVehicleDoorState;
using EQuestVehicleDoorState = vehicle::EQuestVehicleDoorState;
} // namespace RED4ext

// clang-format on
