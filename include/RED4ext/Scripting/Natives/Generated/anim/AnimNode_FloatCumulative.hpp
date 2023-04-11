#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/BoolLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_FloatCumulative : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_FloatCumulative";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x58 - 0x48]; // 48
    bool clamp; // 58
    bool resetOnActivation; // 59
    bool normalize180; // 5A
    uint8_t unk5B[0x5C - 0x5B]; // 5B
    float defaultValue; // 5C
    CName resetExternalEventName; // 60
    anim::FloatLink inputNode; // 68
    anim::FloatLink minValue; // 88
    anim::FloatLink maxValue; // A8
    anim::FloatLink resetSpeed; // C8
    anim::BoolLink normalize180Input; // E8
    anim::BoolLink override; // 108
    anim::FloatLink curValue; // 128
};
RED4EXT_ASSERT_SIZE(AnimNode_FloatCumulative, 0x148);
} // namespace anim
using animAnimNode_FloatCumulative = anim::AnimNode_FloatCumulative;
} // namespace RED4ext

// clang-format on
