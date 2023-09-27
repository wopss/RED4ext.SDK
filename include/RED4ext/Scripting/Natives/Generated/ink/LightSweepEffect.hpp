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

    float positionX; // 50
    float positionY; // 54
    float angle; // 58
    float width; // 5C
    float intensity; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(LightSweepEffect, 0x68);
} // namespace ink
using inkLightSweepEffect = ink::LightSweepEffect;
} // namespace RED4ext

// clang-format on
