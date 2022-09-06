#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct CEnvDisplaySettingsParams
{
    static constexpr const char* NAME = "CEnvDisplaySettingsParams";
    static constexpr const char* ALIAS = NAME;

    float gamma; // 00
    bool enableInstantAdaptation; // 04
    bool enableGlobalLightingTrajectory; // 05
    bool enableEnvProbeInstantUpdate; // 06
    bool allowEnvProbeUpdate; // 07
    bool allowBloom; // 08
    bool allowColorMod; // 09
    bool allowAntialiasing; // 0A
    bool allowGlobalFog; // 0B
    bool allowDOF; // 0C
    bool allowSSAO; // 0D
    bool allowCloudsShadow; // 0E
    uint8_t unk0F[0x11 - 0xF]; // F
    bool allowWaterShader; // 11
    uint8_t unk12[0x18 - 0x12]; // 12
};
RED4EXT_ASSERT_SIZE(CEnvDisplaySettingsParams, 0x18);
} // namespace RED4ext

// clang-format on
