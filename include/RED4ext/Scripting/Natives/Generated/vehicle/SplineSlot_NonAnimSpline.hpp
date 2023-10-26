#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) SplineSlot_NonAnimSpline
{
    static constexpr const char* NAME = "vehicleSplineSlot_NonAnimSpline";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x1F0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SplineSlot_NonAnimSpline, 0x1F0);
} // namespace vehicle
using vehicleSplineSlot_NonAnimSpline = vehicle::SplineSlot_NonAnimSpline;
} // namespace RED4ext

// clang-format on
