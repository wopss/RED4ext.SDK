#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace vehicle {
enum class AudioEventAction : int32_t
{
    OnPlayerDriving = 0,
    OnPlayerPassenger = 1,
    OnPlayerEnterCombat = 2,
    OnPlayerExitCombat = 3,
    OnPlayerExitVehicle = 4,
    OnPlayerVehicleSummoned = 5,
};
} // namespace vehicle
using vehicleAudioEventAction = vehicle::AudioEventAction;
} // namespace RED4ext

// clang-format on
