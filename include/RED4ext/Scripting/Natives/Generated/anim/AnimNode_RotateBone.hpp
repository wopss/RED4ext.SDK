#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ETransformAxis.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_RotateBone : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_RotateBone";
    static constexpr const char* ALIAS = NAME;

    float scale; // 48
    float biasAngle; // 4C
    float minAngle; // 50
    float maxAngle; // 54
    anim::TransformIndex bone; // 58
    anim::ETransformAxis axis; // 70
    bool clampRotation; // 74
    bool useIncrementalMode; // 75
    bool resetOnActivation; // 76
    bool inModelSpace; // 77
    uint8_t unk78[0x88 - 0x78]; // 78
    anim::PoseLink inputNode; // 88
    anim::FloatLink angleNode; // A0
    anim::FloatLink minValueNode; // C0
    anim::FloatLink maxValueNode; // E0
};
RED4EXT_ASSERT_SIZE(AnimNode_RotateBone, 0x100);
} // namespace anim
using animAnimNode_RotateBone = anim::AnimNode_RotateBone;
} // namespace RED4ext

// clang-format on
