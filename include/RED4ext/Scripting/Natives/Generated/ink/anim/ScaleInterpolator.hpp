#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Interpolator.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct ScaleInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimScaleInterpolator";
    static constexpr const char* ALIAS = "inkAnimScale";

    Vector2 startValue; // 68
    Vector2 endValue; // 70
};
RED4EXT_ASSERT_SIZE(ScaleInterpolator, 0x78);
} // namespace ink::anim
using inkanimScaleInterpolator = ink::anim::ScaleInterpolator;
using inkAnimScale = ink::anim::ScaleInterpolator;
} // namespace RED4ext

// clang-format on
