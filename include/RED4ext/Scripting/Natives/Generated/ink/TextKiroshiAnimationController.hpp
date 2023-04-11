#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/RichTextBoxWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextAnimationController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct TextKiroshiAnimationController : ink::TextAnimationController
{
    static constexpr const char* NAME = "inkTextKiroshiAnimationController";
    static constexpr const char* ALIAS = "inkTextKiroshiAnimController";

    uint8_t unkF0[0x150 - 0xF0]; // F0
    CString nativeText; // 150
    ink::TextWidgetReference preTranslatedTextWidget; // 170
    ink::TextWidgetReference postTranslatedTextWidget; // 188
    ink::RichTextBoxWidgetReference nativeTextWidget; // 1A0
    ink::TextWidgetReference translatedTextWidget; // 1B8
    uint8_t unk1D0[0x228 - 0x1D0]; // 1D0
    float timeToSkip; // 228
    uint8_t unk22C[0x230 - 0x22C]; // 22C
};
RED4EXT_ASSERT_SIZE(TextKiroshiAnimationController, 0x230);
} // namespace ink
using inkTextKiroshiAnimationController = ink::TextKiroshiAnimationController;
using inkTextKiroshiAnimController = ink::TextKiroshiAnimationController;
} // namespace RED4ext

// clang-format on
