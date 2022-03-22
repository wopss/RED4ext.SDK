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

    uint8_t unk48[0x230 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemWeather, 0x230);
} // namespace world
} // namespace RED4ext
