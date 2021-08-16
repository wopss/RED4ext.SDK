#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ink/TextWidget.hpp>

namespace RED4ext
{
namespace ink { 
struct TextInputWidget : ink::TextWidget
{
    static constexpr const char* NAME = "inkTextInputWidget";
    static constexpr const char* ALIAS = "inkTextInput";

    uint8_t unk410[0x450 - 0x410]; // 410
};
RED4EXT_ASSERT_SIZE(TextInputWidget, 0x450);
} // namespace ink
using inkTextInput = ink::TextInputWidget;
} // namespace RED4ext
