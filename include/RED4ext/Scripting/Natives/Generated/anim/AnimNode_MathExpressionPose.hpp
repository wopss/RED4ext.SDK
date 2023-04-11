#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/MathExpressionNodeData.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_MathExpressionPose : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_MathExpressionPose";
    static constexpr const char* ALIAS = NAME;

    anim::MathExpressionNodeData expressionData; // 60
    anim::NamedTrackIndex outputFloatTrack; // A0
};
RED4EXT_ASSERT_SIZE(AnimNode_MathExpressionPose, 0xB8);
} // namespace anim
using animAnimNode_MathExpressionPose = anim::AnimNode_MathExpressionPose;
} // namespace RED4ext

// clang-format on
