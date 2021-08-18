#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink { 
struct GlitchEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkGlitchEffect";
    static constexpr const char* ALIAS = NAME;

    float intensity; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    float sizeX; // 70
    float sizeY; // 74
    float offsetX; // 78
    float offsetY; // 7C
};
RED4EXT_ASSERT_SIZE(GlitchEffect, 0x80);
} // namespace ink
} // namespace RED4ext
