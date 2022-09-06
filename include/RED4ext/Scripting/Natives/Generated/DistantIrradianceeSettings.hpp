#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
struct DistantIrradianceeSettings : IAreaSettings
{
    static constexpr const char* NAME = "DistantIrradianceeSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<Vector2> distantRange; // 48
    CurveData<Vector3> distantHeightRange; // 80
    CurveData<float> distantLights; // B8
    CurveData<Vector2> distantLightsRange; // F0
    CurveData<float> blendDistance; // 128
};
RED4EXT_ASSERT_SIZE(DistantIrradianceeSettings, 0x160);
} // namespace RED4ext

// clang-format on
