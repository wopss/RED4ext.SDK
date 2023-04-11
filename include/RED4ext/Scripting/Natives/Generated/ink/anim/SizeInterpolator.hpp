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
struct SizeInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimSizeInterpolator";
    static constexpr const char* ALIAS = "inkAnimSize";

    Vector2 startValue; // 68
    Vector2 endValue; // 70
};
RED4EXT_ASSERT_SIZE(SizeInterpolator, 0x78);
} // namespace ink::anim
using inkanimSizeInterpolator = ink::anim::SizeInterpolator;
using inkAnimSize = ink::anim::SizeInterpolator;
} // namespace RED4ext

// clang-format on
