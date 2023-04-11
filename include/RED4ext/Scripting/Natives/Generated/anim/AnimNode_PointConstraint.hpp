#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_PointConstraint_WeightedTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ConstraintWeightMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim { struct AnimNodeSourceChannel_WeightedVector; }

namespace anim
{
struct AnimNode_PointConstraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_PointConstraint";
    static constexpr const char* ALIAS = NAME;

    bool areSourceChannelsResaved; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
    DynArray<Handle<anim::AnimNodeSourceChannel_WeightedVector>> inputTransforms; // 68
    DynArray<anim::AnimNode_PointConstraint_WeightedTransform> inputWeightedTransforms; // 78
    DynArray<float> preprocessedWeights; // 88
    anim::TransformIndex transformIndex; // 98
    anim::ConstraintWeightMode weightMode; // B0
    float weight; // B4
    anim::NamedTrackIndex weightFloatTrack; // B8
};
RED4EXT_ASSERT_SIZE(AnimNode_PointConstraint, 0xD0);
} // namespace anim
using animAnimNode_PointConstraint = anim::AnimNode_PointConstraint;
} // namespace RED4ext

// clang-format on
