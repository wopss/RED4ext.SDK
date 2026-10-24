#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink
{
struct LightSweepEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkLightSweepEffect";
    static constexpr const char* ALIAS = NAME;

    float positionX; // 60
    float positionY; // 64
    float angle; // 68
    float width; // 6C
    float intensity; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(LightSweepEffect, 0x78);
} // namespace ink
using inkLightSweepEffect = ink::LightSweepEffect;
} // namespace RED4ext

// clang-format on
