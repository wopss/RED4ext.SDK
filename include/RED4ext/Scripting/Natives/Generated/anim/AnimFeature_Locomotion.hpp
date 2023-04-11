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
struct AnimFeature_Locomotion : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_Locomotion";
    static constexpr const char* ALIAS = "AnimFeature_Locomotion";

    int32_t action; // 40
    int32_t style; // 44
    float pathCurvature; // 48
    float inclineAngle; // 4C
    float groundAngle; // 50
    float animDeltaZ; // 54
    float animationPlaybackTime; // 58
    float footScaleFactor; // 5C
    float directionalStartAngle; // 60
    float speedProgress; // 64
    bool isOnStairs; // 68
    bool areAnimWrappersUnlocked; // 69
    uint8_t unk6A[0x70 - 0x6A]; // 6A
};
RED4EXT_ASSERT_SIZE(AnimFeature_Locomotion, 0x70);
} // namespace anim
using animAnimFeature_Locomotion = anim::AnimFeature_Locomotion;
using AnimFeature_Locomotion = anim::AnimFeature_Locomotion;
} // namespace RED4ext

// clang-format on
