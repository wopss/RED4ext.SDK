#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct RichTextBoxWidgetReference : ink::TextWidgetReference
{
    static constexpr const char* NAME = "inkRichTextBoxWidgetReference";
    static constexpr const char* ALIAS = "inkRichTextBoxRef";

};
RED4EXT_ASSERT_SIZE(RichTextBoxWidgetReference, 0x18);
} // namespace ink
using inkRichTextBoxWidgetReference = ink::RichTextBoxWidgetReference;
using inkRichTextBoxRef = ink::RichTextBoxWidgetReference;
} // namespace RED4ext

// clang-format on
