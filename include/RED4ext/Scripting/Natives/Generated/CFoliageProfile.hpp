#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CGradient;

struct CFoliageProfile : CResource
{
    static constexpr const char* NAME = "CFoliageProfile";
    static constexpr const char* ALIAS = NAME;

    float cutoffAlphaMinMip; // 40
    float cutoffAlphaMaxMip; // 44
    float billboardCutoffAlpha; // 48
    float aoScale; // 4C
    float terrainBlendScale; // 50
    float terrainBlendBias; // 54
    float billboardDepthScale; // 58
    float preserveOriginalColor; // 5C
    float billboardRoughnessBias; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    Ref<CGradient> colorGradient; // 68
    float colorGradientWeight; // 80
    float colorGradientDarkenWeight; // 84
    uint8_t unk88[0x98 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(CFoliageProfile, 0x98);
} // namespace RED4ext

// clang-format on
