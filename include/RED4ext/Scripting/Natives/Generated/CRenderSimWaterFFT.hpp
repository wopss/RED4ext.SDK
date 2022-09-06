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

    uint8_t unk38[0x40 - 0x38]; // 38
    float windDir; // 40
    float windSpeed; // 44
    float windScale; // 48
    float amplitude; // 4C
    float lambda; // 50
    uint8_t unk54[0x70 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(CRenderSimWaterFFT, 0x70);
} // namespace RED4ext

// clang-format on
