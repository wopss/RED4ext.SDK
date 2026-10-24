#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IDynamicTextureGenerator.hpp>

namespace RED4ext
{
struct CRenderSimWaterFFT : IDynamicTextureGenerator
{
    static constexpr const char* NAME = "CRenderSimWaterFFT";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x3C - 0x38]; // 38
    float windDir; // 3C
    float windSpeed; // 40
    float windScale; // 44
    float amplitude; // 48
    float lambda; // 4C
    uint8_t unk50[0x68 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(CRenderSimWaterFFT, 0x68);
} // namespace RED4ext

// clang-format on
