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
struct AnimNode_SpringDamp : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_SpringDamp";
    static constexpr const char* ALIAS = NAME;

    float massFactor; // 48
    float springFactor; // 4C
    float dampFactor; // 50
    bool startFromDefaultValue; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
    float defaultInitialValue; // 58
    bool wrapAroundRange; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
    float rangeMin; // 60
    float rangeMax; // 64
    float timeStep; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    anim::FloatLink inputNode; // 70
    uint8_t unk90[0xB0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(AnimNode_SpringDamp, 0xB0);
} // namespace anim
using animAnimNode_SpringDamp = anim::AnimNode_SpringDamp;
} // namespace RED4ext

// clang-format on
