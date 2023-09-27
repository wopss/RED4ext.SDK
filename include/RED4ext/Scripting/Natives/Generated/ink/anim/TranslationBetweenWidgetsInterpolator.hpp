#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/TranslationInterpolator.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct TranslationBetweenWidgetsInterpolator : ink::anim::TranslationInterpolator
{
    static constexpr const char* NAME = "inkanimTranslationBetweenWidgetsInterpolator";
    static constexpr const char* ALIAS = "inkAnimTranslationBetweenWidgets";

    CName startWidgetPath; // 78
    CName endWidgetPath; // 80
};
RED4EXT_ASSERT_SIZE(TranslationBetweenWidgetsInterpolator, 0x88);
} // namespace ink::anim
using inkanimTranslationBetweenWidgetsInterpolator = ink::anim::TranslationBetweenWidgetsInterpolator;
using inkAnimTranslationBetweenWidgets = ink::anim::TranslationBetweenWidgetsInterpolator;
} // namespace RED4ext

// clang-format on
