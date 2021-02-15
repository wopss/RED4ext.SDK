#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/IAreaSettings.hpp>

namespace RED4ext
{
struct ChromaticAberrationAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "ChromaticAberrationAreaSettings";
    static constexpr const char* ALIAS = NAME;

    bool chromaticAberrationEnabled; // 48
    uint8_t unk49[0x4C - 0x49]; // 49
    float chromaticAberrationMargin; // 4C
    float chromaticAberrationOffset; // 50
    float chromaticAberrationExp; // 54
    float subpixelDispersal; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(ChromaticAberrationAreaSettings, 0x60);
} // namespace RED4ext
