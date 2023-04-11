#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimMathExpressionFloatSocket.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimMathExpressionQuaternionSocket.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimMathExpressionVectorSocket.hpp>

namespace RED4ext
{
namespace math { struct ExprExpression; }

namespace anim
{
struct MathExpressionNodeData
{
    static constexpr const char* NAME = "animMathExpressionNodeData";
    static constexpr const char* ALIAS = NAME;

    Handle<math::ExprExpression> expression; // 00
    DynArray<anim::AnimMathExpressionFloatSocket> floatSockets; // 10
    DynArray<anim::AnimMathExpressionVectorSocket> vectorSockets; // 20
    DynArray<anim::AnimMathExpressionQuaternionSocket> quaternionSockets; // 30
};
RED4EXT_ASSERT_SIZE(MathExpressionNodeData, 0x40);
} // namespace anim
using animMathExpressionNodeData = anim::MathExpressionNodeData;
} // namespace RED4ext

// clang-format on
