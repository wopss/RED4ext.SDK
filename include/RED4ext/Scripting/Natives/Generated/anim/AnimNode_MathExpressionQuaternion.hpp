#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_QuaternionValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/MathExpressionNodeData.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_MathExpressionQuaternion : anim::AnimNode_QuaternionValue
{
    static constexpr const char* NAME = "animAnimNode_MathExpressionQuaternion";
    static constexpr const char* ALIAS = NAME;

    anim::MathExpressionNodeData expressionData; // 48
};
RED4EXT_ASSERT_SIZE(AnimNode_MathExpressionQuaternion, 0x88);
} // namespace anim
using animAnimNode_MathExpressionQuaternion = anim::AnimNode_MathExpressionQuaternion;
} // namespace RED4ext

// clang-format on
