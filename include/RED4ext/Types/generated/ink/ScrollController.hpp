#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/Vector2.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/EScrollDirection.hpp>
#include <RED4ext/Types/generated/ink/ScrollAreaWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct ScrollController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkScrollController";
    static constexpr const char* ALIAS = NAME;

    ink::ScrollAreaWidgetReference ScrollArea; // 68
    ink::WidgetReference VerticalScrollBarRef; // 80
    ink::WidgetReference navigableCompoundWidget; // 98
    ink::CompoundWidgetReference CompoundWidgetRef; // B0
    uint8_t unkC8[0xD8 - 0xC8]; // C8
    bool autoHideVertical; // D8
    uint8_t unkD9[0xDC - 0xD9]; // D9
    float scrollSpeedGamepad; // DC
    float scrollSpeedMouse; // E0
    ink::EScrollDirection direction; // E4
    bool useGlobalInput; // E8
    uint8_t unkE9[0xEC - 0xE9]; // E9
    float position; // EC
    float scrollDelta; // F0
    Vector2 viewportSize; // F4
    Vector2 contentSize; // FC
    uint8_t unk104[0x168 - 0x104]; // 104
};
RED4EXT_ASSERT_SIZE(ScrollController, 0x168);
} // namespace ink
} // namespace RED4ext
