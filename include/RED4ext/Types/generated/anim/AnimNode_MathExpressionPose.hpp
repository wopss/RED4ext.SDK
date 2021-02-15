#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Types/generated/anim/MathExpressionNodeData.hpp>
#include <RED4ext/Types/generated/anim/NamedTrackIndex.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_MathExpressionPose : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_MathExpressionPose";
    static constexpr const char* ALIAS = NAME;

    anim::MathExpressionNodeData expressionData; // 60
    anim::NamedTrackIndex outputFloatTrack; // A0
};
RED4EXT_ASSERT_SIZE(AnimNode_MathExpressionPose, 0xB8);
} // namespace anim
} // namespace RED4ext
