#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct STonemappingACESParams
{
    static constexpr const char* NAME = "STonemappingACESParams";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    float minStops; // 08
    float maxStops; // 0C
    float midGrayScale; // 10
    float surroundGamma; // 14
    float toneCurveSaturation; // 18
    bool adjustWhitePoint; // 1C
    bool desaturate; // 1D
    bool dimSurround; // 1E
    bool tonemapLuminance; // 1F
    bool applyAfterLUT; // 20
    uint8_t unk21[0x28 - 0x21]; // 21
};
RED4EXT_ASSERT_SIZE(STonemappingACESParams, 0x28);
} // namespace RED4ext

// clang-format on
