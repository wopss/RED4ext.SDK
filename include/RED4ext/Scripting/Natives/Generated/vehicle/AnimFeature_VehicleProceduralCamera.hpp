#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) AnimFeature_VehicleProceduralCamera : anim::AnimFeature
{
    static constexpr const char* NAME = "vehicleAnimFeature_VehicleProceduralCamera";
    static constexpr const char* ALIAS = NAME;

    Vector4 cameraTranslationVS; // 40
    Quaternion cameraOrientationVS; // 50
    float cameraTargetWeight; // 60
    uint8_t unk64[0x70 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(AnimFeature_VehicleProceduralCamera, 0x70);
} // namespace vehicle
using vehicleAnimFeature_VehicleProceduralCamera = vehicle::AnimFeature_VehicleProceduralCamera;
} // namespace RED4ext

// clang-format on
