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
struct TextKiroshiInterpolator : ink::anim::TextInterpolator
{
    static constexpr const char* NAME = "inkanimTextKiroshiInterpolator";
    static constexpr const char* ALIAS = "inkAnimTextKiroshi";

};
RED4EXT_ASSERT_SIZE(TextKiroshiInterpolator, 0x70);
} // namespace ink::anim
using inkanimTextKiroshiInterpolator = ink::anim::TextKiroshiInterpolator;
using inkAnimTextKiroshi = ink::anim::TextKiroshiInterpolator;
} // namespace RED4ext

// clang-format on
