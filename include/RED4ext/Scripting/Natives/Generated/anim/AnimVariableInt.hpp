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
struct AnimVariableInt : anim::AnimVariable
{
    static constexpr const char* NAME = "animAnimVariableInt";
    static constexpr const char* ALIAS = NAME;

    int32_t value; // 38
    int32_t default_; // 3C -- default
    int32_t min; // 40
    int32_t max; // 44
};
RED4EXT_ASSERT_SIZE(AnimVariableInt, 0x48);
} // namespace anim
using animAnimVariableInt = anim::AnimVariableInt;
} // namespace RED4ext

// clang-format on
