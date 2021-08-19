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

    uint8_t unk38[0x48 - 0x38]; // 38
    float windDir; // 48
    float windSpeed; // 4C
    float windScale; // 50
    float amplitude; // 54
    float lambda; // 58
    uint8_t unk5C[0x68 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(CRenderSimWaterFFT, 0x68);
} // namespace RED4ext
