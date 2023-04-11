#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world { struct Effect; }
namespace world { struct EnvironmentAreaParameters; }

namespace world
{
struct WeatherState : ISerializable
{
    static constexpr const char* NAME = "worldWeatherState";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> minDuration; // 30
    CurveData<float> maxDuration; // 68
    Ref<world::EnvironmentAreaParameters> environmentAreaParameters; // A0
    RaRef<world::Effect> effect; // B8
    CName name; // C0
    CurveData<float> probability; // C8
    CurveData<float> transitionDuration; // 100
};
RED4EXT_ASSERT_SIZE(WeatherState, 0x138);
} // namespace world
using worldWeatherState = world::WeatherState;
} // namespace RED4ext

// clang-format on
