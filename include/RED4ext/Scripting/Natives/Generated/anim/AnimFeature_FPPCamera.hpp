#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimFeature_FPPCamera : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_FPPCamera";
    static constexpr const char* ALIAS = "AnimFeature_FPPCamera";

    float fov; // 40
    float deltaYaw; // 44
    float deltaYawExternal; // 48
    float deltaYawInput; // 4C
    float yawSpeed; // 50
    float yawMaxLeft; // 54
    float yawMaxRight; // 58
    bool normalizeYaw; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
    float deltaPitch; // 60
    float deltaPitchExternal; // 64
    float deltaPitchInput; // 68
    float pitchSpeed; // 6C
    float pitchMin; // 70
    float pitchMax; // 74
    float resetYawSpeed; // 78
    float resetPitchSpeed; // 7C
    float resetExternalsSpeed; // 80
    bool isSceneMode; // 84
    uint8_t unk85[0x88 - 0x85]; // 85
    float t4Blend; // 88
    float t4Pitch; // 8C
    float t4Yaw; // 90
    float t4Roll; // 94
    bool t4CopyPitchAndYaw; // 98
    uint8_t unk99[0xA0 - 0x99]; // 99
    Quaternion t4CameraIdleOrientation; // A0
    Quaternion t4CameraControlIdleOrientation; // B0
    bool t4UseCameraIdleOrientation; // C0
    bool sceneCameraUseTrajectorySpace; // C1
    bool sceneTransitioningToGameplay; // C2
    uint8_t unkC3[0xC4 - 0xC3]; // C3
    float yawMultiplier; // C4
    float pitchMultiplier; // C8
    float overridePitchInput; // CC
    float overridePitchRef; // D0
    float overrideYawInput; // D4
    float overrideYawRef; // D8
    float override; // DC
    float parallaxSide; // E0
    float parallaxForward; // E4
    float parallaxSpace; // E8
    float vehicleProceduralCameraWeight; // EC
    float vehicleOffsetWeight; // F0
    float gameplayCameraPoseWeight; // F4
    float additiveCameraMovementsWeight; // F8
    uint8_t unkFC[0x100 - 0xFC]; // FC
};
RED4EXT_ASSERT_SIZE(AnimFeature_FPPCamera, 0x100);
} // namespace anim
using animAnimFeature_FPPCamera = anim::AnimFeature_FPPCamera;
using AnimFeature_FPPCamera = anim::AnimFeature_FPPCamera;
} // namespace RED4ext

// clang-format on
