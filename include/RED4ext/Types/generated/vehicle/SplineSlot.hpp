#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace vehicle { 
struct SplineSlot
{
    static constexpr const char* NAME = "vehicleSplineSlot";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x210 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SplineSlot, 0x210);
} // namespace vehicle
} // namespace RED4ext
