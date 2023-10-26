#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimFeature_VehiclePassenger : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_VehiclePassenger";
    static constexpr const char* ALIAS = "AnimFeature_VehiclePassenger";

    Vector4 overallForceMS; // 40
    float turnSpeed; // 50
    float bankSpeed; // 54
    float longitudinalForce; // 58
    float transversalForce; // 5C
    float collisionForceLR; // 60
    float collisionForceFB; // 64
    float speed; // 68
    float inputLR; // 6C
    float inputFB; // 70
    float inputGas; // 74
    float inputBreak; // 78
    float inputHandBreak; // 7C
    float vehicleRoll; // 80
    float vehiclePitch; // 84
    bool isCar; // 88
    bool inAir; // 89
    bool clutchInUse; // 8A
    bool headCollision; // 8B
    uint8_t unk8C[0x90 - 0x8C]; // 8C
};
RED4EXT_ASSERT_SIZE(AnimFeature_VehiclePassenger, 0x90);
} // namespace anim
using animAnimFeature_VehiclePassenger = anim::AnimFeature_VehiclePassenger;
using AnimFeature_VehiclePassenger = anim::AnimFeature_VehiclePassenger;
} // namespace RED4ext

// clang-format on
