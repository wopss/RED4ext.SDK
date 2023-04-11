#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimMathExpressionVectorSocket
{
    static constexpr const char* NAME = "animAnimMathExpressionVectorSocket";
    static constexpr const char* ALIAS = NAME;

    anim::VectorLink link; // 00
    uint16_t expressionVarId; // 20
    uint8_t unk22[0x28 - 0x22]; // 22
};
RED4EXT_ASSERT_SIZE(AnimMathExpressionVectorSocket, 0x28);
} // namespace anim
using animAnimMathExpressionVectorSocket = anim::AnimMathExpressionVectorSocket;
} // namespace RED4ext

// clang-format on
