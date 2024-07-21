#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimVariable.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimVariableVector : anim::AnimVariable
{
    static constexpr const char* NAME = "animAnimVariableVector";
    static constexpr const char* ALIAS = NAME;

    float x; // 38
    float y; // 3C
    float z; // 40
    float w; // 44
    uint8_t unk48[0x50 - 0x48]; // 48
    Vector4 default_; // 50 -- default
    Vector4 min; // 60
    Vector4 max; // 70
};
RED4EXT_ASSERT_SIZE(AnimVariableVector, 0x80);
} // namespace anim
using animAnimVariableVector = anim::AnimVariableVector;
} // namespace RED4ext

// clang-format on
