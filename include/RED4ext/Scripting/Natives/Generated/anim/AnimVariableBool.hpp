#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimVariable.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimVariableBool : anim::AnimVariable
{
    static constexpr const char* NAME = "animAnimVariableBool";
    static constexpr const char* ALIAS = NAME;

    bool value; // 38
    bool default_; // 39 -- default
    uint8_t unk3A[0x40 - 0x3A]; // 3A
};
RED4EXT_ASSERT_SIZE(AnimVariableBool, 0x40);
} // namespace anim
using animAnimVariableBool = anim::AnimVariableBool;
} // namespace RED4ext

// clang-format on
