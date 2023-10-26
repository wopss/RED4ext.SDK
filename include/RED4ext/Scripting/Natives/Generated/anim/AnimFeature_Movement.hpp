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
struct __declspec(align(0x10)) AnimFeature_Movement : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_Movement";
    static constexpr const char* ALIAS = "AnimFeature_Movement";

    Vector4 movementDirection; // 40
    float speed; // 50
    float desiredSpeed; // 54
    float stabilizedSpeed; // 58
    float acceleration; // 5C
    float timeToChangeLocomotion; // 60
    float strafeYaw; // 64
    float yawSpeed; // 68
    int32_t locomotionState; // 6C
};
RED4EXT_ASSERT_SIZE(AnimFeature_Movement, 0x70);
} // namespace anim
using animAnimFeature_Movement = anim::AnimFeature_Movement;
using AnimFeature_Movement = anim::AnimFeature_Movement;
} // namespace RED4ext

// clang-format on
