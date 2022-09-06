#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct HeatHazeAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "HeatHazeAreaSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> effectStrength; // 48
    CurveData<float> startDistance; // 80
    CurveData<float> maxDistance; // B8
    CurveData<float> patternScale; // F0
    CurveData<float> movementSpeedScale; // 128
};
RED4EXT_ASSERT_SIZE(HeatHazeAreaSettings, 0x160);
} // namespace RED4ext

// clang-format on
