#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ConstraintWeightMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_AimConstraint_ObjectRotationUp : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_AimConstraint_ObjectRotationUp";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex targetTransform; // 60
    anim::TransformIndex upTransform; // 78
    Vector3 upTransformVector; // 90
    Vector3 forwardAxisLS; // 9C
    Vector3 upAxisLS; // A8
    uint8_t unkB4[0xB8 - 0xB4]; // B4
    anim::TransformIndex transformIndex; // B8
    anim::ConstraintWeightMode weightMode; // D0
    float weight; // D4
    anim::NamedTrackIndex weightFloatTrack; // D8
    uint8_t unkF0[0x118 - 0xF0]; // F0
};
RED4EXT_ASSERT_SIZE(AnimNode_AimConstraint_ObjectRotationUp, 0x118);
} // namespace anim
using animAnimNode_AimConstraint_ObjectRotationUp = anim::AnimNode_AimConstraint_ObjectRotationUp;
} // namespace RED4ext

// clang-format on
