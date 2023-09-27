#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_CriticalSpringDamp : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_CriticalSpringDamp";
    static constexpr const char* ALIAS = NAME;

    float smoothTime; // 48
    bool useRange; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    float rangeMin; // 50
    float rangeMax; // 54
    bool useRawTime; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
    anim::FloatLink inputNode; // 60
    uint8_t unk80[0xA0 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(AnimNode_CriticalSpringDamp, 0xA0);
} // namespace anim
using animAnimNode_CriticalSpringDamp = anim::AnimNode_CriticalSpringDamp;
} // namespace RED4ext

// clang-format on
