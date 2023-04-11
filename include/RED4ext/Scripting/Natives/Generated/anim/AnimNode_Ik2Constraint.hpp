#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/Axis.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim { struct AnimNodeSourceChannel_WeightedQuat; }
namespace anim { struct IAnimNodeSourceChannel_Vector; }

namespace anim
{
struct AnimNode_Ik2Constraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_Ik2Constraint";
    static constexpr const char* ALIAS = NAME;

    Handle<anim::IAnimNodeSourceChannel_Vector> inputTarget; // 60
    Handle<anim::IAnimNodeSourceChannel_Vector> inputPoleVector; // 70
    Handle<anim::AnimNodeSourceChannel_WeightedQuat> inputTargetOrientation; // 80
    anim::TransformIndex firstBoneIndex; // 90
    anim::TransformIndex secondBoneIndex; // A8
    anim::TransformIndex endBoneIndex; // C0
    anim::Axis hingeAxis; // D8
    float twistValue; // DC
    float weight; // E0
    uint8_t unkE4[0xE8 - 0xE4]; // E4
    anim::NamedTrackIndex weightFloatTrack; // E8
    float maxHingeAngle; // 100
    uint8_t unk104[0x128 - 0x104]; // 104
    anim::FloatLink weightNode; // 128
    anim::FloatLink twistNode; // 148
};
RED4EXT_ASSERT_SIZE(AnimNode_Ik2Constraint, 0x168);
} // namespace anim
using animAnimNode_Ik2Constraint = anim::AnimNode_Ik2Constraint;
} // namespace RED4ext

// clang-format on
