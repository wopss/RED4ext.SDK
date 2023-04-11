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
struct AnimNode_DampFloat : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_DampFloat";
    static constexpr const char* ALIAS = NAME;

    float defaultIncreaseSpeed; // 48
    float defaultDecreaseSpeed; // 4C
    bool startFromDefaultValue; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    float defaultInitialValue; // 54
    bool wrapAroundRange; // 58
    uint8_t unk59[0x5C - 0x59]; // 59
    float rangeMin; // 5C
    float rangeMax; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    anim::FloatLink inputNode; // 68
    anim::FloatLink increaseSpeedNode; // 88
    anim::FloatLink decreaseSpeedNode; // A8
    uint8_t unkC8[0xD8 - 0xC8]; // C8
};
RED4EXT_ASSERT_SIZE(AnimNode_DampFloat, 0xD8);
} // namespace anim
using animAnimNode_DampFloat = anim::AnimNode_DampFloat;
} // namespace RED4ext

// clang-format on
