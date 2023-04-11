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
struct AnimNode_AimConstraint_ObjectUp : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_AimConstraint_ObjectUp";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex targetTransform; // 60
    anim::TransformIndex upTransform; // 78
    Vector3 forwardAxisLS; // 90
    Vector3 upAxisLS; // 9C
    anim::TransformIndex transformIndex; // A8
    anim::ConstraintWeightMode weightMode; // C0
    float weight; // C4
    anim::NamedTrackIndex weightFloatTrack; // C8
    uint8_t unkE0[0x108 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(AnimNode_AimConstraint_ObjectUp, 0x108);
} // namespace anim
using animAnimNode_AimConstraint_ObjectUp = anim::AnimNode_AimConstraint_ObjectUp;
} // namespace RED4ext

// clang-format on
