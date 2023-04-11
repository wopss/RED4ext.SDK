#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EAnimGraphMathInterpolation.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatInterpolation : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_FloatInterpolation";
    static constexpr const char* ALIAS = NAME;

    float x1; // 48
    float y1; // 4C
    float x2; // 50
    float y2; // 54
    anim::EAnimGraphMathInterpolation interpolationType; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    anim::FloatLink inputNode; // 60
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatInterpolation, 0x80);
} // namespace anim
using animAnimNode_FloatInterpolation = anim::AnimNode_FloatInterpolation;
} // namespace RED4ext

// clang-format on
