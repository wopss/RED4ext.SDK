#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ConstraintWeightMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SimpleSpline : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SimpleSpline";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex startTransform; // 60
    anim::TransformIndex middleTransform; // 78
    anim::TransformIndex endTransform; // 90
    anim::TransformIndex constrainedTransform; // A8
    anim::ConstraintWeightMode progressMode; // C0
    float defaultProgress; // C4
    anim::NamedTrackIndex progressTrack; // C8
    bool areSourceChannelsResaved; // E0
    uint8_t unkE1[0xE8 - 0xE1]; // E1
};
RED4EXT_ASSERT_SIZE(AnimNode_SimpleSpline, 0xE8);
} // namespace anim
using animAnimNode_SimpleSpline = anim::AnimNode_SimpleSpline;
} // namespace RED4ext

// clang-format on
