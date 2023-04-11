#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ImageWidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct LinePatternWidgetReference : ink::ImageWidgetReference
{
    static constexpr const char* NAME = "inkLinePatternWidgetReference";
    static constexpr const char* ALIAS = "inkLinePatternRef";

};
RED4EXT_ASSERT_SIZE(LinePatternWidgetReference, 0x18);
} // namespace ink
using inkLinePatternWidgetReference = ink::LinePatternWidgetReference;
using inkLinePatternRef = ink::LinePatternWidgetReference;
} // namespace RED4ext

// clang-format on
