#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/ButtonClickCallback.hpp>
#include <RED4ext/Types/generated/ink/ButtonHoldCompleteCallback.hpp>
#include <RED4ext/Types/generated/ink/ButtonProgressChangedCallback.hpp>
#include <RED4ext/Types/generated/ink/ButtonSelectionCallback.hpp>
#include <RED4ext/Types/generated/ink/ButtonStateChangeCallback.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct ButtonController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkButtonController";
    static constexpr const char* ALIAS = NAME;

    ink::ButtonClickCallback ButtonClick; // 68
    ink::ButtonHoldCompleteCallback ButtonHoldComplete; // A0
    ink::ButtonStateChangeCallback ButtonStateChanged; // D8
    ink::ButtonProgressChangedCallback ButtonHoldProgressChanged; // 110
    ink::ButtonSelectionCallback ButtonSelectionChanged; // 148
    uint8_t unk180[0x18C - 0x180]; // 180
    bool selectable; // 18C
    bool selected; // 18D
    uint8_t unk18E[0x190 - 0x18E]; // 18E
    bool canHold; // 190
    bool autoUpdateWidgetState; // 191
    uint8_t unk192[0x1E8 - 0x192]; // 192
};
RED4EXT_ASSERT_SIZE(ButtonController, 0x1E8);
} // namespace ink
} // namespace RED4ext
