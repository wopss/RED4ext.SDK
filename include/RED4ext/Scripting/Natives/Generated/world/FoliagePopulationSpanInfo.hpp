#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
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
using worldFoliagePopulationSpanInfo = world::FoliagePopulationSpanInfo;
} // namespace RED4ext

// clang-format on
