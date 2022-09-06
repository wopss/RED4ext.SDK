#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct RTAOAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "RTAOAreaSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> RangeNear; // 48
    CurveData<float> RangeFar; // 80
    CurveData<float> RadiusNear; // B8
    CurveData<float> RadiusFar; // F0
    CurveData<float> coneAoDiffuseStrength; // 128
    CurveData<float> coneAoSpecularStrength; // 160
    CurveData<float> coneAoSpecularTreshold; // 198
    CurveData<float> lightAoDiffuseStrength; // 1D0
    CurveData<float> lightAoSpecularStrength; // 208
};
RED4EXT_ASSERT_SIZE(RTAOAreaSettings, 0x240);
} // namespace RED4ext

// clang-format on
