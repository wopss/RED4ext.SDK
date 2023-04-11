#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world { struct WeatherState; }

namespace world
{
struct WeatherStateTransition : ISerializable
{
    static constexpr const char* NAME = "worldWeatherStateTransition";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> probability; // 30
    CurveData<float> transitionDuration; // 68
    Handle<world::WeatherState> sourceWeatherState; // A0
    Handle<world::WeatherState> targetWeatherState; // B0
};
RED4EXT_ASSERT_SIZE(WeatherStateTransition, 0xC0);
} // namespace world
using worldWeatherStateTransition = world::WeatherStateTransition;
} // namespace RED4ext

// clang-format on
