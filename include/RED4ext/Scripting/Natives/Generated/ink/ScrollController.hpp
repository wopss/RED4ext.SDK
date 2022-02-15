#pragma once

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
namespace ink { 
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
    float scrollDelta; // 100
    Vector2 viewportSize; // 104
    Vector2 contentSize; // 10C
    uint8_t unk114[0x178 - 0x114]; // 114
};
RED4EXT_ASSERT_SIZE(ScrollController, 0x178);
} // namespace ink
} // namespace RED4ext
