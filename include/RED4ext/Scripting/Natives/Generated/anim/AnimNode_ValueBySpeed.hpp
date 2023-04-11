#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ClampType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_ValueBySpeed : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_ValueBySpeed";
    static constexpr const char* ALIAS = NAME;

    float defaultValue; // 48
    anim::ClampType clampType; // 4C
    float rangeMin; // 50
    float rangeMax; // 54
    bool resetOnActivation; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
    anim::FloatLink speed; // 60
    uint8_t unk80[0x90 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(AnimNode_ValueBySpeed, 0x90);
} // namespace anim
using animAnimNode_ValueBySpeed = anim::AnimNode_ValueBySpeed;
} // namespace RED4ext

// clang-format on
