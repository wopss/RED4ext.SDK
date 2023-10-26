#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) HACK_AREA_Settings : IAreaSettings
{
    static constexpr const char* NAME = "HACK_AREA_Settings";
    static constexpr const char* ALIAS = NAME;

    float surfelScale; // 48
    float skyScale; // 4C
    float emissiveScale; // 50
    float missingEnergyScale; // 54
    float albedoMetalness; // 58
    bool overrideOnPureView; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
    CurveData<HDRColor> bottomHemisphereTint; // 60
    float bottomHemisphereStrength; // 98
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
    HDRColor surfAlbedoOverride; // A0
    float surfAlbedoOverrideRatio; // B0
    uint8_t unkB4[0xC0 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(HACK_AREA_Settings, 0xC0);
} // namespace RED4ext

// clang-format on
