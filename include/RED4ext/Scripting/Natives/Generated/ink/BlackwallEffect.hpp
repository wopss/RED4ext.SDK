#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/GlitchEffect.hpp>

namespace RED4ext
{
namespace ink
{
struct BlackwallEffect : ink::GlitchEffect
{
    static constexpr const char* NAME = "inkBlackwallEffect";
    static constexpr const char* ALIAS = NAME;

    float scaleX; // 78
    float scaleY; // 7C
    float layerVisibility; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(BlackwallEffect, 0x88);
} // namespace ink
using inkBlackwallEffect = ink::BlackwallEffect;
} // namespace RED4ext

// clang-format on
