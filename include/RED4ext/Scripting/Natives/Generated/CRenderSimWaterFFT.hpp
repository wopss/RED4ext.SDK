#pragma once

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

    uint8_t unk38[0x58 - 0x38]; // 38
    float windDir; // 58
    float windSpeed; // 5C
    float windScale; // 60
    float amplitude; // 64
    float lambda; // 68
    uint8_t unk6C[0x78 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(CRenderSimWaterFFT, 0x78);
} // namespace RED4ext
