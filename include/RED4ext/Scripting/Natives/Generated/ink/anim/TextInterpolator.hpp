#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Interpolator.hpp>

namespace RED4ext
{
namespace ink::anim { 
struct TextInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimTextInterpolator";
    static constexpr const char* ALIAS = "inkAnimTextInterpolator";

    float startValue; // 68
    float endValue; // 6C
};
RED4EXT_ASSERT_SIZE(TextInterpolator, 0x70);
} // namespace ink::anim
using inkAnimTextInterpolator = ink::anim::TextInterpolator;
} // namespace RED4ext
