#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EAnimGraphMathOp.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatMathOp : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_FloatMathOp";
    static constexpr const char* ALIAS = NAME;

    anim::EAnimGraphMathOp operationType; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    anim::FloatLink firstInputNode; // 50
    anim::FloatLink secondInputNode; // 70
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatMathOp, 0x90);
} // namespace anim
using animAnimNode_FloatMathOp = anim::AnimNode_FloatMathOp;
} // namespace RED4ext

// clang-format on
