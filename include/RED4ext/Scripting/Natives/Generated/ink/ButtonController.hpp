#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonClickCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonHoldCompleteCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonProgressChangedCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonSelectionCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonStateChangeCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DiscreteNavigationController.hpp>

namespace RED4ext
{
namespace ink
{
struct ButtonController : ink::DiscreteNavigationController
{
    static constexpr const char* NAME = "inkButtonController";
    static constexpr const char* ALIAS = NAME;

    ink::ButtonClickCallback ButtonClick; // C0
    ink::ButtonHoldCompleteCallback ButtonHoldComplete; // F8
    ink::ButtonStateChangeCallback ButtonStateChanged; // 130
    ink::ButtonProgressChangedCallback ButtonHoldProgressChanged; // 168
    ink::ButtonSelectionCallback ButtonSelectionChanged; // 1A0
    uint8_t unk1D8[0x1E4 - 0x1D8]; // 1D8
    bool selectable; // 1E4
    bool selected; // 1E5
    uint8_t unk1E6[0x1E8 - 0x1E6]; // 1E6
    bool canHold; // 1E8
    bool autoUpdateWidgetState; // 1E9
    uint8_t unk1EA[0x240 - 0x1EA]; // 1EA
};
RED4EXT_ASSERT_SIZE(ButtonController, 0x240);
} // namespace ink
using inkButtonController = ink::ButtonController;
} // namespace RED4ext

// clang-format on
