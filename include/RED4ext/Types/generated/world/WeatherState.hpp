#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>

namespace RED4ext
{
namespace world { struct Effect; }
namespace world { struct EnvironmentAreaParameters; }

namespace world { 
struct WeatherState
{
    static constexpr const char* NAME = "worldWeatherState";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> probability; // 00
    CurveData<float> minDuration; // 38
    CurveData<float> maxDuration; // 70
    CurveData<float> transitionDuration; // A8
    Ref<world::EnvironmentAreaParameters> environmentAreaParameters; // E0
    RaRef<world::Effect> effect; // F8
    CName name; // 100
};
RED4EXT_ASSERT_SIZE(WeatherState, 0x108);
} // namespace world
} // namespace RED4ext
