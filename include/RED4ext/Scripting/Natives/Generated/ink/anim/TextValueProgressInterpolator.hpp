#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/TextInterpolator.hpp>

namespace RED4ext
{
namespace ink::anim
{
struct TextValueProgressInterpolator : ink::anim::TextInterpolator
{
    static constexpr const char* NAME = "inkanimTextValueProgressInterpolator";
    static constexpr const char* ALIAS = "inkAnimTextValueProgress";

};
RED4EXT_ASSERT_SIZE(TextValueProgressInterpolator, 0x70);
} // namespace ink::anim
using inkanimTextValueProgressInterpolator = ink::anim::TextValueProgressInterpolator;
using inkAnimTextValueProgress = ink::anim::TextValueProgressInterpolator;
} // namespace RED4ext

// clang-format on
