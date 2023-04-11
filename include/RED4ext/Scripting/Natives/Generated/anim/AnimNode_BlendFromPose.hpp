#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EBlendFromPoseMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EBlendTypeLBC.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_BlendFromPose : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_BlendFromPose";
    static constexpr const char* ALIAS = NAME;

    float blendTime; // 60
    anim::EBlendTypeLBC blendType; // 64
    anim::EBlendFromPoseMode mode; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    CName requestedByTag; // 70
    CurveData<float> customBlendCurve; // 78
    uint8_t unkB0[0xF8 - 0xB0]; // B0
};
RED4EXT_ASSERT_SIZE(AnimNode_BlendFromPose, 0xF8);
} // namespace anim
using animAnimNode_BlendFromPose = anim::AnimNode_BlendFromPose;
} // namespace RED4ext

// clang-format on
