#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle { 
struct SplineSlot_NonAnimSpline
{
    static constexpr const char* NAME = "vehicleSplineSlot_NonAnimSpline";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x14F0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SplineSlot_NonAnimSpline, 0x14F0);
} // namespace vehicle
} // namespace RED4ext
