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
struct __declspec(align(0x10)) CinematicCameraShotEffect_VectorDamper : vehicle::TimedCinematicCameraShotEffect
{
    static constexpr const char* NAME = "vehicleCinematicCameraShotEffect_VectorDamper";
    static constexpr const char* ALIAS = "CameraShotEffect_VectorDamper";

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CinematicCameraShotEffect_VectorDamper, 0x90);
} // namespace vehicle
using vehicleCinematicCameraShotEffect_VectorDamper = vehicle::CinematicCameraShotEffect_VectorDamper;
using CameraShotEffect_VectorDamper = vehicle::CinematicCameraShotEffect_VectorDamper;
} // namespace RED4ext

// clang-format on
