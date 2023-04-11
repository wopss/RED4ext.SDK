#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct LookAtLimits
{
    static constexpr const char* NAME = "animLookAtLimits";
    static constexpr const char* ALIAS = "LookAtLimits";

    float softLimitDegrees; // 00
    float hardLimitDegrees; // 04
    float hardLimitDistance; // 08
    float backLimitDegrees; // 0C
};
RED4EXT_ASSERT_SIZE(LookAtLimits, 0x10);
} // namespace anim
using animLookAtLimits = anim::LookAtLimits;
using LookAtLimits = anim::LookAtLimits;
} // namespace RED4ext

// clang-format on
