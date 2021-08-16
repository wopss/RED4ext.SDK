#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/IAreaSettings.hpp>
#include <RED4ext/Types/generated/ShaftsAreaSettings.hpp>

namespace RED4ext
{
struct BloomAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "BloomAreaSettings";
    static constexpr const char* ALIAS = NAME;

    float luminanceThresholdMin; // 48
    float luminanceThresholdMax; // 4C
    float sceneColorScale; // 50
    float bloomColorScale; // 54
    uint8_t numDownsamplePasses; // 58
    uint8_t unk59[0x5C - 0x59]; // 59
    ShaftsAreaSettings shaftsAreaSettings; // 5C
};
RED4EXT_ASSERT_SIZE(BloomAreaSettings, 0x68);
} // namespace RED4ext
