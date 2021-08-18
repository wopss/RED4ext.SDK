#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>

namespace RED4ext
{
namespace world { 
struct HeatmapSetup
{
    static constexpr const char* NAME = "worldHeatmapSetup";
    static constexpr const char* ALIAS = NAME;

    Box volumeBox; // 00
    uint32_t verticalResolution; // 20
    uint32_t horizontalResolution; // 24
    uint8_t unk28[0x30 - 0x28]; // 28
};
RED4EXT_ASSERT_SIZE(HeatmapSetup, 0x30);
} // namespace world
} // namespace RED4ext
