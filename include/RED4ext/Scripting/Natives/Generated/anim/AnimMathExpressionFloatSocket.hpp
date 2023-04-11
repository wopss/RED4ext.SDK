#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimMathExpressionFloatSocket
{
    static constexpr const char* NAME = "animAnimMathExpressionFloatSocket";
    static constexpr const char* ALIAS = NAME;

    anim::FloatLink link; // 00
    uint16_t expressionVarId; // 20
    uint8_t unk22[0x28 - 0x22]; // 22
    anim::NamedTrackIndex inputFloatTrack; // 28
};
RED4EXT_ASSERT_SIZE(AnimMathExpressionFloatSocket, 0x40);
} // namespace anim
using animAnimMathExpressionFloatSocket = anim::AnimMathExpressionFloatSocket;
} // namespace RED4ext

// clang-format on
