#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ink/TextAnimationController.hpp>
#include <RED4ext/Types/generated/ink/TextReplaceAnimationControllerWidgetTextUsage.hpp>

namespace RED4ext
{
namespace ink { 
struct TextReplaceAnimationController : ink::TextAnimationController
{
    static constexpr const char* NAME = "inkTextReplaceAnimationController";
    static constexpr const char* ALIAS = "inkTextReplaceController";

    ink::TextReplaceAnimationControllerWidgetTextUsage widgetTextUsage; // E0
    uint8_t unkE1[0x108 - 0xE1]; // E1
    CString targetText; // 108
    LocalizationString baseTextLocalized; // 128
    LocalizationString targetTextLocalized; // 150
    uint8_t unk178[0x1BC - 0x178]; // 178
    float timeToSkip; // 1BC
};
RED4EXT_ASSERT_SIZE(TextReplaceAnimationController, 0x1C0);
} // namespace ink
using inkTextReplaceController = ink::TextReplaceAnimationController;
} // namespace RED4ext
