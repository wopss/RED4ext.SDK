#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/RichTextBoxWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink
{
struct TextMotherTongueController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkTextMotherTongueController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xF8 - 0x78]; // 78
    ink::TextWidgetReference preTranslatedTextWidget; // F8
    ink::TextWidgetReference postTranslatedTextWidget; // 110
    ink::RichTextBoxWidgetReference nativeTextWidget; // 128
    ink::TextWidgetReference translatedTextWidget; // 140
    uint8_t unk158[0x160 - 0x158]; // 158
};
RED4EXT_ASSERT_SIZE(TextMotherTongueController, 0x160);
} // namespace ink
using inkTextMotherTongueController = ink::TextMotherTongueController;
} // namespace RED4ext

// clang-format on
