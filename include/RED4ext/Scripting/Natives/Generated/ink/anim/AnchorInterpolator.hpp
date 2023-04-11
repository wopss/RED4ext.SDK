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
struct AnchorInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimAnchorInterpolator";
    static constexpr const char* ALIAS = "inkAnimAnchor";

    Vector2 startValue; // 68
    Vector2 endValue; // 70
};
RED4EXT_ASSERT_SIZE(AnchorInterpolator, 0x78);
} // namespace ink::anim
using inkanimAnchorInterpolator = ink::anim::AnchorInterpolator;
using inkAnimAnchor = ink::anim::AnchorInterpolator;
} // namespace RED4ext

// clang-format on
