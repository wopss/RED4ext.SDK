#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/anim/TextInterpolator.hpp>

namespace RED4ext
{
namespace ink::anim { 
struct TextReplaceInterpolator : ink::anim::TextInterpolator
{
    static constexpr const char* NAME = "inkanimTextReplaceInterpolator";
    static constexpr const char* ALIAS = "inkAnimTextReplace";

};
RED4EXT_ASSERT_SIZE(TextReplaceInterpolator, 0x70);
} // namespace ink::anim
using inkAnimTextReplace = ink::anim::TextReplaceInterpolator;
} // namespace RED4ext
