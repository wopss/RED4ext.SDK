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

    ink::ToggleChangedCallback ToggleChanged; // 1E8
    bool autoToggleOnInput; // 220
    bool isToggled; // 221
    uint8_t unk222[0x228 - 0x222]; // 222
};
RED4EXT_ASSERT_SIZE(ToggleController, 0x228);
} // namespace ink
} // namespace RED4ext
