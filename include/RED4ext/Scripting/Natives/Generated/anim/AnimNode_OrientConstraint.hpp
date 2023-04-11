#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OrientConstraint_WeightedTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ConstraintWeightMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim { struct AnimNodeSourceChannel_WeightedQuat; }

namespace anim
{
struct AnimNode_OrientConstraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_OrientConstraint";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<anim::AnimNodeSourceChannel_WeightedQuat>> inputTransforms; // 60
    bool areSourceChannelsResaved; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
    DynArray<anim::AnimNode_OrientConstraint_WeightedTransform> inputWeightedTransforms; // 78
    DynArray<float> preprocessedWeights; // 88
    anim::TransformIndex transformIndex; // 98
    anim::ConstraintWeightMode weightMode; // B0
    float weight; // B4
    anim::NamedTrackIndex weightFloatTrack; // B8
};
RED4EXT_ASSERT_SIZE(AnimNode_OrientConstraint, 0xD0);
} // namespace anim
using animAnimNode_OrientConstraint = anim::AnimNode_OrientConstraint;
} // namespace RED4ext

// clang-format on
