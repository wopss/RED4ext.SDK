#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_VectorValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/MathExpressionNodeData.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_MathExpressionVector : anim::AnimNode_VectorValue
{
    static constexpr const char* NAME = "animAnimNode_MathExpressionVector";
    static constexpr const char* ALIAS = NAME;

    anim::MathExpressionNodeData expressionData; // 48
};
RED4EXT_ASSERT_SIZE(AnimNode_MathExpressionVector, 0x88);
} // namespace anim
} // namespace RED4ext
