#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/ShaftsAreaSettings.hpp>

namespace RED4ext
{
struct BloomAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "BloomAreaSettings";
    static constexpr const char* ALIAS = NAME;

    float blurSizeX; // 48
    float blurSizeY; // 4C
    float luminanceThresholdMin; // 50
    float luminanceThresholdMax; // 54
    float sceneColorScale; // 58
    float bloomColorScale; // 5C
    uint8_t numDownsamplePasses; // 60
    NativeArray<Color, 5> mipColors; // 61
    uint8_t unk75[0x78 - 0x75]; // 75
    NativeArray<float, 3> mipLuminanceClamp; // 78
    ShaftsAreaSettings shaftsAreaSettings; // 84
};
RED4EXT_ASSERT_SIZE(BloomAreaSettings, 0x90);
} // namespace RED4ext

// clang-format on
