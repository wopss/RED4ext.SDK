#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct RenderFeaturesAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "RenderFeaturesAreaSettings";
    static constexpr const char* ALIAS = NAME;

    bool allowGlobalIllumination; // 48
    bool allowScreenSpaceReflections; // 49
    bool allowVolumetricFog; // 4A
    uint8_t unk4B[0x50 - 0x4B]; // 4B
};
RED4EXT_ASSERT_SIZE(RenderFeaturesAreaSettings, 0x50);
} // namespace RED4ext

// clang-format on
