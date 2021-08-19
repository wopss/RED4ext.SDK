#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Interpolator.hpp>

namespace RED4ext
{
namespace ink::anim { 
struct PaddingInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimPaddingInterpolator";
    static constexpr const char* ALIAS = NAME;

    ink::Margin startValue; // 68
    ink::Margin endValue; // 78
};
RED4EXT_ASSERT_SIZE(PaddingInterpolator, 0x88);
} // namespace ink::anim
} // namespace RED4ext
