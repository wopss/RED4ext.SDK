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
struct PivotInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimPivotInterpolator";
    static constexpr const char* ALIAS = "inkAnimPivot";

    Vector2 startValue; // 68
    Vector2 endValue; // 70
};
RED4EXT_ASSERT_SIZE(PivotInterpolator, 0x78);
} // namespace ink::anim
using inkanimPivotInterpolator = ink::anim::PivotInterpolator;
using inkAnimPivot = ink::anim::PivotInterpolator;
} // namespace RED4ext

// clang-format on
