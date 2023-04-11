#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace world
{
struct WeatherAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldWeatherAreaNotifier";
    static constexpr const char* ALIAS = NAME;

    float horizontalFadeDistance; // B8
    float verticalFadeDistance; // BC
    DynArray<CName> weatherStateNames; // C0
    DynArray<float> weatherStateValues; // D0
};
RED4EXT_ASSERT_SIZE(WeatherAreaNotifier, 0xE0);
} // namespace world
using worldWeatherAreaNotifier = world::WeatherAreaNotifier;
} // namespace RED4ext

// clang-format on
