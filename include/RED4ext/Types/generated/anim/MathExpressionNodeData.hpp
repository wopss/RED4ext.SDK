#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/anim/AnimMathExpressionFloatSocket.hpp>
#include <RED4ext/Types/generated/anim/AnimMathExpressionQuaternionSocket.hpp>
#include <RED4ext/Types/generated/anim/AnimMathExpressionVectorSocket.hpp>

namespace RED4ext
{
namespace math { struct ExprExpression; }

namespace anim { 
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
} // namespace RED4ext
