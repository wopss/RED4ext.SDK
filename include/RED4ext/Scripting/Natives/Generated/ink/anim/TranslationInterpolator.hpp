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
struct TranslationInterpolator : ink::anim::Interpolator
{
    static constexpr const char* NAME = "inkanimTranslationInterpolator";
    static constexpr const char* ALIAS = "inkAnimTranslation";

    Vector2 startValue; // 68
    Vector2 endValue; // 70
};
RED4EXT_ASSERT_SIZE(TranslationInterpolator, 0x78);
} // namespace ink::anim
using inkanimTranslationInterpolator = ink::anim::TranslationInterpolator;
using inkAnimTranslation = ink::anim::TranslationInterpolator;
} // namespace RED4ext

// clang-format on
