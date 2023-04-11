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
struct ShapeBorderTransparencyInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimShapeBorderTransparencyInterpolator";
    static constexpr const char* ALIAS = "inkAnimShapeBorderTransparency";

    uint8_t unk68[0x70 - 0x68]; // 68
    float startValue; // 70
    float endValue; // 74
};
RED4EXT_ASSERT_SIZE(ShapeBorderTransparencyInterpolator, 0x78);
} // namespace ink::anim
using inkanimShapeBorderTransparencyInterpolator = ink::anim::ShapeBorderTransparencyInterpolator;
using inkAnimShapeBorderTransparency = ink::anim::ShapeBorderTransparencyInterpolator;
} // namespace RED4ext

// clang-format on
