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
struct RotationInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimRotationInterpolator";
    static constexpr const char* ALIAS = "inkAnimRotation";

    float startValue; // 68
    float endValue; // 6C
    bool goShortPath; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(RotationInterpolator, 0x78);
} // namespace ink::anim
using inkanimRotationInterpolator = ink::anim::RotationInterpolator;
using inkAnimRotation = ink::anim::RotationInterpolator;
} // namespace RED4ext

// clang-format on
