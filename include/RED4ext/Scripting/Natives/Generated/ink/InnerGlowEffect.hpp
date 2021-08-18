#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink { 
struct InnerGlowEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkInnerGlowEffect";
    static constexpr const char* ALIAS = NAME;

    float colorR; // 68
    float colorG; // 6C
    float colorB; // 70
    float colorA; // 74
    float offsetX; // 78
    float offsetY; // 7C
};
RED4EXT_ASSERT_SIZE(InnerGlowEffect, 0x80);
} // namespace ink
} // namespace RED4ext
