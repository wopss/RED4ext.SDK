#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextAnimationController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextReplaceAnimationControllerWidgetTextUsage.hpp>

namespace RED4ext
{
namespace ink
{
struct TextReplaceAnimationController : ink::TextAnimationController
{
    static constexpr const char* NAME = "inkTextReplaceAnimationController";
    static constexpr const char* ALIAS = "inkTextReplaceController";

    ink::TextReplaceAnimationControllerWidgetTextUsage widgetTextUsage; // F0
    uint8_t unkF1[0x118 - 0xF1]; // F1
    CString targetText; // 118
    LocalizationString baseTextLocalized; // 138
    LocalizationString targetTextLocalized; // 160
    uint8_t unk188[0x1CC - 0x188]; // 188
    float timeToSkip; // 1CC
};
RED4EXT_ASSERT_SIZE(TextReplaceAnimationController, 0x1D0);
} // namespace ink
using inkTextReplaceAnimationController = ink::TextReplaceAnimationController;
using inkTextReplaceController = ink::TextReplaceAnimationController;
} // namespace RED4ext

// clang-format on
