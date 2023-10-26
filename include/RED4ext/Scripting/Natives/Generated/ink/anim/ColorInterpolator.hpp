#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/Interpolator.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct __declspec(align(0x10)) ColorInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimColorInterpolator";
    static constexpr const char* ALIAS = "inkAnimColor";

    uint8_t unk68[0x70 - 0x68]; // 68
    HDRColor startValue; // 70
    HDRColor endValue; // 80
};
RED4EXT_ASSERT_SIZE(ColorInterpolator, 0x90);
} // namespace ink::anim
using inkanimColorInterpolator = ink::anim::ColorInterpolator;
using inkAnimColor = ink::anim::ColorInterpolator;
} // namespace RED4ext

// clang-format on
