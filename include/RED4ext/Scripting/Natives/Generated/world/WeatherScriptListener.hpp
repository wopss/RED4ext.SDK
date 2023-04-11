#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace world
{
struct WeatherScriptListener : IScriptable
{
    static constexpr const char* NAME = "worldWeatherScriptListener";
    static constexpr const char* ALIAS = "WeatherScriptListener";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(WeatherScriptListener, 0x48);
} // namespace world
using worldWeatherScriptListener = world::WeatherScriptListener;
using WeatherScriptListener = world::WeatherScriptListener;
} // namespace RED4ext

// clang-format on
