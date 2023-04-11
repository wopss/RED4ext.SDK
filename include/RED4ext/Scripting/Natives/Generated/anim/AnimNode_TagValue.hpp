#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_FloatValue.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_TagValue : anim::AnimNode_FloatValue
{
    static constexpr const char* NAME = "animAnimNode_TagValue";
    static constexpr const char* ALIAS = NAME;

    CName tag; // 48
    float defaultValue; // 50
    bool oneMinus; // 54
    uint8_t unk55[0x68 - 0x55]; // 55
};
RED4EXT_ASSERT_SIZE(AnimNode_TagValue, 0x68);
} // namespace anim
using animAnimNode_TagValue = anim::AnimNode_TagValue;
} // namespace RED4ext

// clang-format on
