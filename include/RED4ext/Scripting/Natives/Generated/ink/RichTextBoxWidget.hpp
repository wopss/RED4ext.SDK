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
    static constexpr const char* ALIAS = NAME;

    uint8_t unk420[0x440 - 0x420]; // 420
};
RED4EXT_ASSERT_SIZE(RichTextBoxWidget, 0x440);
} // namespace ink
} // namespace RED4ext
