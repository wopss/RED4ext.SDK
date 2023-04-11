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
struct AnimProfilerData_TimingsDetailed
{
    static constexpr const char* NAME = "animAnimProfilerData_TimingsDetailed";
    static constexpr const char* ALIAS = NAME;

    CName className; // 00
    float avarageExclusiveUpdateTimeMS; // 08
    float avarageInclusiveUpdateTimeMS; // 0C
    float avarageExclusiveSampleTimeMS; // 10
    float avarageInclusiveSampleTimeMS; // 14
    float totalExclusiveUpdateTimeMS; // 18
    float totalInclusiveUpdateTimeMS; // 1C
    float totalExclusiveSampleTimeMS; // 20
    float totalInclusiveSampleTimeMS; // 24
    uint32_t updatesCount; // 28
    uint32_t samplesCount; // 2C
};
RED4EXT_ASSERT_SIZE(AnimProfilerData_TimingsDetailed, 0x30);
} // namespace anim
using animAnimProfilerData_TimingsDetailed = anim::AnimProfilerData_TimingsDetailed;
} // namespace RED4ext

// clang-format on
