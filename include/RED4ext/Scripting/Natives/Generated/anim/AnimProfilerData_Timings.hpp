#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimProfilerData_Timings
{
    static constexpr const char* NAME = "animAnimProfilerData_Timings";
    static constexpr const char* ALIAS = NAME;

    CName className; // 00
    float avarageExclusiveTimeMS; // 08
    float avarageInclusiveTimeMS; // 0C
    uint8_t unk10[0x18 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(AnimProfilerData_Timings, 0x18);
} // namespace anim
using animAnimProfilerData_Timings = anim::AnimProfilerData_Timings;
} // namespace RED4ext

// clang-format on
