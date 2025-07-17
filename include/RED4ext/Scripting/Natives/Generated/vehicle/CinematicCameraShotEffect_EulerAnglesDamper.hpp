#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/TimedCinematicCameraShotEffect.hpp>

namespace RED4ext
{
namespace vehicle
{
struct CinematicCameraShotEffect_EulerAnglesDamper : vehicle::TimedCinematicCameraShotEffect
{
    static constexpr const char* NAME = "vehicleCinematicCameraShotEffect_EulerAnglesDamper";
    static constexpr const char* ALIAS = "CameraShotEffect_EulerAnglesDamper";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CinematicCameraShotEffect_EulerAnglesDamper, 0x70);
} // namespace vehicle
using vehicleCinematicCameraShotEffect_EulerAnglesDamper = vehicle::CinematicCameraShotEffect_EulerAnglesDamper;
using CameraShotEffect_EulerAnglesDamper = vehicle::CinematicCameraShotEffect_EulerAnglesDamper;
} // namespace RED4ext

// clang-format on
