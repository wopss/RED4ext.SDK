#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink { 
struct LightSweepEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkLightSweepEffect";
    static constexpr const char* ALIAS = NAME;

    float positionX; // 68
    float positionY; // 6C
    float angle; // 70
    float width; // 74
    float intensity; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
};
RED4EXT_ASSERT_SIZE(LightSweepEffect, 0x80);
} // namespace ink
} // namespace RED4ext
