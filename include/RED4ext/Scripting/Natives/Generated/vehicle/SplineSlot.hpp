#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) SplineSlot
{
    static constexpr const char* NAME = "vehicleSplineSlot";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x210 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SplineSlot, 0x210);
} // namespace vehicle
using vehicleSplineSlot = vehicle::SplineSlot;
} // namespace RED4ext

// clang-format on
