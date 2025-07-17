#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/CinematicCameraShotEffect.hpp>

namespace RED4ext
{
namespace vehicle
{
struct TimedCinematicCameraShotEffect : vehicle::CinematicCameraShotEffect
{
    static constexpr const char* NAME = "vehicleTimedCinematicCameraShotEffect";
    static constexpr const char* ALIAS = NAME;

    float startDelay; // 40
    float duration; // 44
};
RED4EXT_ASSERT_SIZE(TimedCinematicCameraShotEffect, 0x48);
} // namespace vehicle
using vehicleTimedCinematicCameraShotEffect = vehicle::TimedCinematicCameraShotEffect;
} // namespace RED4ext

// clang-format on
