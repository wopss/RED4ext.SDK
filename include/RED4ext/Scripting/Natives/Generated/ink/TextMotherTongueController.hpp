#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/RichTextBoxWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct TextMotherTongueController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkTextMotherTongueController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0xE8 - 0x68]; // 68
    ink::TextWidgetReference preTranslatedTextWidget; // E8
    ink::TextWidgetReference postTranslatedTextWidget; // 100
    ink::RichTextBoxWidgetReference nativeTextWidget; // 118
    ink::TextWidgetReference translatedTextWidget; // 130
    uint8_t unk148[0x150 - 0x148]; // 148
};
RED4EXT_ASSERT_SIZE(TextMotherTongueController, 0x150);
} // namespace ink
} // namespace RED4ext
