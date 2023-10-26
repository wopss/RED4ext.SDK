#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/Axis.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/QuaternionLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_Ik2 : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_Ik2";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex firstBone; // 48
    anim::TransformIndex secondBone; // 60
    anim::TransformIndex endBone; // 78
    anim::Axis hingeAxis; // 90
    float minHingeAngleDegrees; // 94
    float maxHingeAngleDegrees; // 98
    float firstBoneIkGain; // 9C
    float secondBoneIkGain; // A0
    float endBoneIkGain; // A4
    bool enforceEndPosition; // A8
    bool enforceEndOrientation; // A9
    uint8_t unkAA[0xB0 - 0xAA]; // AA
    Vector4 endBoneOffsetPositionLS; // B0
    anim::TransformIndex bone; // C0
    anim::NamedTrackIndex floatTrack; // D8
    uint8_t unkF0[0x120 - 0xF0]; // F0
    anim::PoseLink inputPoseNode; // 120
    anim::FloatLink weightNode; // 138
    anim::VectorLink endTargetPositionNode; // 158
    anim::QuaternionLink endTargetOrientationNode; // 178
    uint8_t unk198[0x1A0 - 0x198]; // 198
};
RED4EXT_ASSERT_SIZE(AnimNode_Ik2, 0x1A0);
} // namespace anim
using animAnimNode_Ik2 = anim::AnimNode_Ik2;
} // namespace RED4ext

// clang-format on
