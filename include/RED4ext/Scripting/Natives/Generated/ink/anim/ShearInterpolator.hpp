#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Interpolator.hpp>

namespace RED4ext
{
namespace ink::anim { 
struct ShearInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimShearInterpolator";
    static constexpr const char* ALIAS = "inkAnimShear";

    Vector2 startValue; // 68
    Vector2 endValue; // 70
};
RED4EXT_ASSERT_SIZE(ShearInterpolator, 0x78);
} // namespace ink::anim
using inkAnimShear = ink::anim::ShearInterpolator;
} // namespace RED4ext
