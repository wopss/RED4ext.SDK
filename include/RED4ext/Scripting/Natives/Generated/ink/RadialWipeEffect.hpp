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
struct RadialWipeEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkRadialWipeEffect";
    static constexpr const char* ALIAS = NAME;

    float startAngle; // 50
    float transition; // 54
};
RED4EXT_ASSERT_SIZE(RadialWipeEffect, 0x58);
} // namespace ink
using inkRadialWipeEffect = ink::RadialWipeEffect;
} // namespace RED4ext

// clang-format on
