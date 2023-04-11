#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EScrollDirection.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ScrollAreaWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct ScrollController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkScrollController";
    static constexpr const char* ALIAS = NAME;

    ink::ScrollAreaWidgetReference ScrollArea; // 78
    ink::WidgetReference VerticalScrollBarRef; // 90
    ink::WidgetReference navigableCompoundWidget; // A8
    ink::CompoundWidgetReference CompoundWidgetRef; // C0
    uint8_t unkD8[0xE8 - 0xD8]; // D8
    bool autoHideVertical; // E8
    uint8_t unkE9[0xEC - 0xE9]; // E9
    float scrollSpeedGamepad; // EC
    float scrollSpeedMouse; // F0
    ink::EScrollDirection direction; // F4
    bool useGlobalInput; // F8
    uint8_t unkF9[0xFC - 0xF9]; // F9
    float position; // FC
    float desiredSetupPosition; // 100
    bool contentSmallerThanViewport; // 104
    uint8_t unk105[0x108 - 0x105]; // 105
    float scrollDelta; // 108
    Vector2 viewportSize; // 10C
    Vector2 contentSize; // 114
    uint8_t unk11C[0x180 - 0x11C]; // 11C
};
RED4EXT_ASSERT_SIZE(ScrollController, 0x180);
} // namespace ink
using inkScrollController = ink::ScrollController;
} // namespace RED4ext

// clang-format on
