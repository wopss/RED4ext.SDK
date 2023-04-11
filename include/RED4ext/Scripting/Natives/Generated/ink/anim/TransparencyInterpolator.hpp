#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Interpolator.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct TransparencyInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimTransparencyInterpolator";
    static constexpr const char* ALIAS = "inkAnimTransparency";

    float startValue; // 68
    float endValue; // 6C
};
RED4EXT_ASSERT_SIZE(TransparencyInterpolator, 0x70);
} // namespace ink::anim
using inkanimTransparencyInterpolator = ink::anim::TransparencyInterpolator;
using inkAnimTransparency = ink::anim::TransparencyInterpolator;
} // namespace RED4ext

// clang-format on
