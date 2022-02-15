#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonClickCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonHoldCompleteCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonProgressChangedCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonSelectionCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonStateChangeCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct ButtonController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkButtonController";
    static constexpr const char* ALIAS = NAME;

    ink::ButtonClickCallback ButtonClick; // 78
    ink::ButtonHoldCompleteCallback ButtonHoldComplete; // B0
    ink::ButtonStateChangeCallback ButtonStateChanged; // E8
    ink::ButtonProgressChangedCallback ButtonHoldProgressChanged; // 120
    ink::ButtonSelectionCallback ButtonSelectionChanged; // 158
    uint8_t unk190[0x19C - 0x190]; // 190
    bool selectable; // 19C
    bool selected; // 19D
    uint8_t unk19E[0x1A0 - 0x19E]; // 19E
    bool canHold; // 1A0
    bool autoUpdateWidgetState; // 1A1
    uint8_t unk1A2[0x1F8 - 0x1A2]; // 1A2
};
RED4EXT_ASSERT_SIZE(ButtonController, 0x1F8);
} // namespace ink
} // namespace RED4ext
