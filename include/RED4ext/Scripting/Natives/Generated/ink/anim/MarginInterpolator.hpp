#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Interpolator.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct MarginInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimMarginInterpolator";
    static constexpr const char* ALIAS = "inkAnimMargin";

    ink::Margin startValue; // 68
    ink::Margin endValue; // 78
};
RED4EXT_ASSERT_SIZE(MarginInterpolator, 0x88);
} // namespace ink::anim
using inkanimMarginInterpolator = ink::anim::MarginInterpolator;
using inkAnimMargin = ink::anim::MarginInterpolator;
} // namespace RED4ext

// clang-format on
