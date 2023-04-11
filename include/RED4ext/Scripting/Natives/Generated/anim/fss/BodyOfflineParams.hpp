#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim::fss
{
struct BodyOfflineParams
{
    static constexpr const char* NAME = "animfssBodyOfflineParams";
    static constexpr const char* ALIAS = NAME;

    float HipsTilt; // 00
    float HipsShift; // 04
    float LegsPullFactorMin; // 08
    float LegsPullFactorMax; // 0C
    float LegLengthAdjustment; // 10
    float LegMaxStretchOffset; // 14
    float LegMaxStretchAdjustment; // 18
};
RED4EXT_ASSERT_SIZE(BodyOfflineParams, 0x1C);
} // namespace anim::fss
using animfssBodyOfflineParams = anim::fss::BodyOfflineParams;
} // namespace RED4ext

// clang-format on
