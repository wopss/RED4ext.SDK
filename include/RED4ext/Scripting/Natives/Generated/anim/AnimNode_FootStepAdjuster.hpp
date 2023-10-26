#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_FootStepAdjuster : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_FootStepAdjuster";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex leftToeName; // 60
    anim::TransformIndex rightToeName; // 78
    anim::TransformIndex leftFootName; // 90
    anim::TransformIndex rightFootName; // A8
    anim::TransformIndex leftCalfName; // C0
    anim::TransformIndex rightCalfName; // D8
    anim::TransformIndex leftThighName; // F0
    anim::TransformIndex rightThighName; // 108
    anim::TransformIndex pelvisBoneName; // 120
    uint8_t unk138[0x140 - 0x138]; // 138
    Vector4 calfHingeAxis; // 140
    float IKBlendTime; // 150
    float pelvisAdjustmentBlendSpeed; // 154
    float stepAdjustmentInterval; // 158
    bool adjustPelvisVertically; // 15C
    uint8_t unk15D[0x2B0 - 0x15D]; // 15D
    anim::VectorLink controlVectorNode; // 2B0
    anim::FloatLink controlValueNode; // 2D0
};
RED4EXT_ASSERT_SIZE(AnimNode_FootStepAdjuster, 0x2F0);
} // namespace anim
using animAnimNode_FootStepAdjuster = anim::AnimNode_FootStepAdjuster;
} // namespace RED4ext

// clang-format on
