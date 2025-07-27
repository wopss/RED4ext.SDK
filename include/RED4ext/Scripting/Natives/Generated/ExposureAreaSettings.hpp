#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct ExposureAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "ExposureAreaSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> exposureAdaptationSpeedUp; // 48
    CurveData<float> exposureAdaptationSpeedDown; // 80
    CurveData<float> exposurePercentageThresholdLow; // B8
    CurveData<float> exposurePercentageThresholdHigh; // F0
    CurveData<float> exposureMin; // 128
    CurveData<float> exposureMax; // 160
    CurveData<float> exposureCompensation; // 198
    CurveData<float> exposureSkyImpact; // 1D0
    CurveData<float> exposureCenterImportance; // 208
    float cameraVelocityFaloff; // 240
    float exposureCompensationOffset; // 244
};
RED4EXT_ASSERT_SIZE(ExposureAreaSettings, 0x248);
} // namespace RED4ext

// clang-format on
