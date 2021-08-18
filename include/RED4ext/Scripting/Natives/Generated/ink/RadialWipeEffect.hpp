#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink { 
struct RadialWipeEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkRadialWipeEffect";
    static constexpr const char* ALIAS = NAME;

    float startAngle; // 68
    float transition; // 6C
};
RED4EXT_ASSERT_SIZE(RadialWipeEffect, 0x70);
} // namespace ink
} // namespace RED4ext
