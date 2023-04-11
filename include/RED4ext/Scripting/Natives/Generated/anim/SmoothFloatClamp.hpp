#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim
{
struct SmoothFloatClamp
{
    static constexpr const char* NAME = "animSmoothFloatClamp";
    static constexpr const char* ALIAS = NAME;

    float min; // 00
    float max; // 04
    CurveData<float> marginEaseOutCurve; // 08
};
RED4EXT_ASSERT_SIZE(SmoothFloatClamp, 0x40);
} // namespace anim
using animSmoothFloatClamp = anim::SmoothFloatClamp;
} // namespace RED4ext

// clang-format on
