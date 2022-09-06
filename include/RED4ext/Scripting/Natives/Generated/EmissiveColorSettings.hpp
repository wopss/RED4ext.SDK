#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
struct EmissiveColorSettings : IAreaSettings
{
    static constexpr const char* NAME = "EmissiveColorSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<HDRColor> tint; // 48
    CurveData<float> saturation; // 80
    CurveData<float> brigtness; // B8
    CurveData<Vector2> exposure; // F0
    CurveData<Vector2> cameraLuminance; // 128
    CurveData<float> evBlend; // 160
    CurveData<float> exposureIBL; // 198
    CurveData<float> luminanceIBL; // 1D0
    CurveData<float> exposureScale; // 208
    float curveRampIBL; // 240
    uint8_t unk244[0x248 - 0x244]; // 244
};
RED4EXT_ASSERT_SIZE(EmissiveColorSettings, 0x248);
} // namespace RED4ext

// clang-format on
