#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EffectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Interpolator.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct EffectInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimEffectInterpolator";
    static constexpr const char* ALIAS = "inkAnimEffect";

    float startValue; // 68
    float endValue; // 6C
    ink::EffectType effectType; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
    CName effectName; // 78
    CName paramName; // 80
};
RED4EXT_ASSERT_SIZE(EffectInterpolator, 0x88);
} // namespace ink::anim
using inkanimEffectInterpolator = ink::anim::EffectInterpolator;
using inkAnimEffect = ink::anim::EffectInterpolator;
} // namespace RED4ext

// clang-format on
