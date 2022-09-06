#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct ImageBasedFlareAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "ImageBasedFlareAreaSettings";
    static constexpr const char* ALIAS = NAME;

    float treshold; // 48
    float dispersal; // 4C
    float haloWidth; // 50
    float distortion; // 54
    float curve; // 58
    NativeArray<Color, 8> tint; // 5C
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    CurveData<float> scale; // 80
    CurveData<float> saturation; // B8
};
RED4EXT_ASSERT_SIZE(ImageBasedFlareAreaSettings, 0xF0);
} // namespace RED4ext

// clang-format on
