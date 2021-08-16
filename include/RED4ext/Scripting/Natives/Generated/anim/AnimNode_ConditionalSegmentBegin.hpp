#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ConditionalSegmentCondition.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_ConditionalSegmentBegin : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_ConditionalSegmentBegin";
    static constexpr const char* ALIAS = NAME;

    anim::ConditionalSegmentCondition condition; // 60
};
RED4EXT_ASSERT_SIZE(AnimNode_ConditionalSegmentBegin, 0x90);
} // namespace anim
} // namespace RED4ext
