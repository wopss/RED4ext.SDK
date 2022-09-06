#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
struct ChromaticAberrationAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "ChromaticAberrationAreaSettings";
    static constexpr const char* ALIAS = NAME;

    bool chromaticAberrationEnabled; // 48
    uint8_t unk49[0x4C - 0x49]; // 49
    float chromaticAberrationMargin; // 4C
    Vector2 chromaticAberrationSize; // 50
    float chromaticAberrationExp; // 58
    float subpixelDispersal; // 5C
};
RED4EXT_ASSERT_SIZE(ChromaticAberrationAreaSettings, 0x60);
} // namespace RED4ext

// clang-format on
