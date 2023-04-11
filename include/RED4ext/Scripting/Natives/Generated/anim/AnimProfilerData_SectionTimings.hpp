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
struct AnimProfilerData_SectionTimings
{
    static constexpr const char* NAME = "animAnimProfilerData_SectionTimings";
    static constexpr const char* ALIAS = NAME;

    CName sectionName; // 00
    float updateTimeMS; // 08
    float sampleTimeMS; // 0C
};
RED4EXT_ASSERT_SIZE(AnimProfilerData_SectionTimings, 0x10);
} // namespace anim
using animAnimProfilerData_SectionTimings = anim::AnimProfilerData_SectionTimings;
} // namespace RED4ext

// clang-format on
