#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio {
enum class TrafficVehicleAudioAction : int32_t
{
    StartEngine = 0,
    StopEngine = 1,
    StartWheel = 2,
    StopWheel = 3,
    StartRainLoop = 4,
    StopRainLoop = 5,
    Horn = 6,
    HornForced = 7,
    DisableAbilityToPlayRadio = 8,
    StartBrakeLoop = 9,
    EndBrakeLoop = 10,
    ApplyBrake = 11,
    ReleaseBrake = 12,
};
} // namespace audio
using audioTrafficVehicleAudioAction = audio::TrafficVehicleAudioAction;
} // namespace RED4ext

// clang-format on
