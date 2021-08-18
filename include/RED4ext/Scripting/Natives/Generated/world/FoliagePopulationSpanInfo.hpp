#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world { 
struct FoliagePopulationSpanInfo
{
    static constexpr const char* NAME = "worldFoliagePopulationSpanInfo";
    static constexpr const char* ALIAS = NAME;

    uint32_t stancesBegin; // 00
    uint32_t cketBegin; // 04
    uint32_t stancesCount; // 08
    uint32_t cketCount; // 0C
};
RED4EXT_ASSERT_SIZE(FoliagePopulationSpanInfo, 0x10);
} // namespace world
} // namespace RED4ext
