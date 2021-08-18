#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace world { 
struct RuntimeSystemWeather : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldRuntimeSystemWeather";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x8C - 0x48]; // 48
    bool isForcedWeatherState; // 8C
    uint8_t unk8D[0x90 - 0x8D]; // 8D
    uint32_t weatherStateIndex; // 90
    uint32_t forcedWeatherStateIndex; // 94
    uint32_t previousWeatherStateIndex; // 98
    uint8_t unk9C[0x1C0 - 0x9C]; // 9C
    float timeOfDay; // 1C0
    uint8_t unk1C4[0x220 - 0x1C4]; // 1C4
};
RED4EXT_ASSERT_SIZE(RuntimeSystemWeather, 0x220);
} // namespace world
} // namespace RED4ext
