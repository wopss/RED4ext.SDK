#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct RichTextBoxWidget : ink::TextWidget
{
    static constexpr const char* NAME = "inkRichTextBoxWidget";
    static constexpr const char* ALIAS = "inkRichTextBox";

    uint8_t unk430[0x450 - 0x430]; // 430
};
RED4EXT_ASSERT_SIZE(RichTextBoxWidget, 0x450);
} // namespace ink
using inkRichTextBox = ink::RichTextBoxWidget;
} // namespace RED4ext
