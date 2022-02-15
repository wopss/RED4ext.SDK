#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ToggleChangedCallback.hpp>

namespace RED4ext
{
namespace ink { 
struct ToggleController : ink::ButtonController
{
    static constexpr const char* NAME = "inkToggleController";
    static constexpr const char* ALIAS = NAME;

    ink::ToggleChangedCallback ToggleChanged; // 1F8
    bool autoToggleOnInput; // 230
    bool isToggled; // 231
    uint8_t unk232[0x238 - 0x232]; // 232
};
RED4EXT_ASSERT_SIZE(ToggleController, 0x238);
} // namespace ink
} // namespace RED4ext
