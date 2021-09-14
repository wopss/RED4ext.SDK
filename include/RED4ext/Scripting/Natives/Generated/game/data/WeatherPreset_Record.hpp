#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SpawnableObject_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct WeatherPreset_Record : game::data::SpawnableObject_Record
{
    static constexpr const char* NAME = "gamedataWeatherPreset_Record";
    static constexpr const char* ALIAS = "WeatherPreset_Record";

    uint8_t unk78[0x80 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(WeatherPreset_Record, 0x80);
} // namespace game::data
using WeatherPreset_Record = game::data::WeatherPreset_Record;
} // namespace RED4ext
