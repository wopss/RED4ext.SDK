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
struct TextOffsetInterpolator : ink::anim::TextInterpolator
{
    static constexpr const char* NAME = "inkanimTextOffsetInterpolator";
    static constexpr const char* ALIAS = "inkAnimTextOffset";

};
RED4EXT_ASSERT_SIZE(TextOffsetInterpolator, 0x70);
} // namespace ink::anim
using inkanimTextOffsetInterpolator = ink::anim::TextOffsetInterpolator;
using inkAnimTextOffset = ink::anim::TextOffsetInterpolator;
} // namespace RED4ext

// clang-format on
