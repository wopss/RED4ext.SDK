#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct PathTracingSettings : IAreaSettings
{
    static constexpr const char* NAME = "PathTracingSettings";
    static constexpr const char* ALIAS = NAME;

    float albedoModulation; // 48
    float diffuseGlobalScale; // 4C
    float diffuseSunScale; // 50
    float diffuseSkyScale; // 54
    float diffuseLocalLightsScale; // 58
    float diffuseEmissiveScale; // 5C
    float specularGlobalScale; // 60
    float specularSunScale; // 64
    float specularSkyScale; // 68
    float specularLocalLightsScale; // 6C
    float specularEmissiveScale; // 70
    float maxIntensity; // 74
    float GIOnlyLightScale; // 78
    uint32_t rayNumber; // 7C
    uint32_t bounceNumber; // 80
    uint32_t rayNumberScreenshot; // 84
    uint32_t bounceNumberScreenshot; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
};
RED4EXT_ASSERT_SIZE(PathTracingSettings, 0x90);
} // namespace RED4ext

// clang-format on
