#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/RichTextBoxWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextAnimationController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct TextKiroshiAnimationController : ink::TextAnimationController
{
    static constexpr const char* NAME = "inkTextKiroshiAnimationController";
    static constexpr const char* ALIAS = "inkTextKiroshiAnimController";

    uint8_t unkE0[0x140 - 0xE0]; // E0
    CString nativeText; // 140
    ink::TextWidgetReference preTranslatedTextWidget; // 160
    ink::TextWidgetReference postTranslatedTextWidget; // 178
    ink::RichTextBoxWidgetReference nativeTextWidget; // 190
    ink::TextWidgetReference translatedTextWidget; // 1A8
    uint8_t unk1C0[0x218 - 0x1C0]; // 1C0
    float timeToSkip; // 218
    uint8_t unk21C[0x220 - 0x21C]; // 21C
};
RED4EXT_ASSERT_SIZE(TextKiroshiAnimationController, 0x220);
} // namespace ink
using inkTextKiroshiAnimController = ink::TextKiroshiAnimationController;
} // namespace RED4ext
