#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/TextWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct RichTextBoxWidget : ink::TextWidget
{
    static constexpr const char* NAME = "inkRichTextBoxWidget";
    static constexpr const char* ALIAS = "inkRichTextBox";

    uint8_t unk410[0x430 - 0x410]; // 410
};
RED4EXT_ASSERT_SIZE(RichTextBoxWidget, 0x430);
} // namespace ink
using inkRichTextBox = ink::RichTextBoxWidget;
} // namespace RED4ext
