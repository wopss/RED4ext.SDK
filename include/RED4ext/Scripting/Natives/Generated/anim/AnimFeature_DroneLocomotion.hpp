#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimFeature_DroneLocomotion : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_DroneLocomotion";
    static constexpr const char* ALIAS = "AnimFeature_DroneLocomotion";

    float speed; // 40
    float angularSpeed; // 44
    float lookAtAngle; // 48
    float desiredSpeed; // 4C
    float pathCurvative; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(AnimFeature_DroneLocomotion, 0x58);
} // namespace anim
using animAnimFeature_DroneLocomotion = anim::AnimFeature_DroneLocomotion;
using AnimFeature_DroneLocomotion = anim::AnimFeature_DroneLocomotion;
} // namespace RED4ext

// clang-format on
