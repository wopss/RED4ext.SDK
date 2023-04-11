#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/QuaternionLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimMathExpressionQuaternionSocket
{
    static constexpr const char* NAME = "animAnimMathExpressionQuaternionSocket";
    static constexpr const char* ALIAS = NAME;

    anim::QuaternionLink link; // 00
    uint16_t expressionVarId; // 20
    uint8_t unk22[0x28 - 0x22]; // 22
};
RED4EXT_ASSERT_SIZE(AnimMathExpressionQuaternionSocket, 0x28);
} // namespace anim
using animAnimMathExpressionQuaternionSocket = anim::AnimMathExpressionQuaternionSocket;
} // namespace RED4ext

// clang-format on
