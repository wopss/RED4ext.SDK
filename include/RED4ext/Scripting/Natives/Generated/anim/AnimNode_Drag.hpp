#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_Drag : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_Drag";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex sourceBone; // 60
    anim::TransformIndex outTargetBone; // 78
    float simulationFps; // 90
    float sourceSpeedMultiplier; // 94
    bool hasOvershoot; // 98
    uint8_t unk99[0x9C - 0x99]; // 99
    float overshootDuration; // 9C
    float overshootDetectionMinSpeed; // A0
    float overshootDetectionMaxSpeed; // A4
    bool useSteps; // A8
    uint8_t unkA9[0xAC - 0xA9]; // A9
    float stepsTargetSpeedMultiplier; // AC
    float timeBetweenSteps; // B0
    float timeInStep; // B4
    uint8_t unkB8[0x180 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(AnimNode_Drag, 0x180);
} // namespace anim
using animAnimNode_Drag = anim::AnimNode_Drag;
} // namespace RED4ext

// clang-format on
