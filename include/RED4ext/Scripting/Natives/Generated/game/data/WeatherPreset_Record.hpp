#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SpawnableObject_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct WeatherPreset_Record : game::data::SpawnableObject_Record
{
    static constexpr const char* NAME = "gamedataWeatherPreset_Record";
    static constexpr const char* ALIAS = "WeatherPreset_Record";

    uint8_t unkF8[0x108 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(WeatherPreset_Record, 0x108);
} // namespace game::data
using gamedataWeatherPreset_Record = game::data::WeatherPreset_Record;
using WeatherPreset_Record = game::data::WeatherPreset_Record;
} // namespace RED4ext

// clang-format on
