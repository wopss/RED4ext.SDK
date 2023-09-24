#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ButtonController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ToggleChangedCallback.hpp>

namespace RED4ext
{
namespace ink
{
struct ToggleController : ink::ButtonController
{
    static constexpr const char* NAME = "inkToggleController";
    static constexpr const char* ALIAS = NAME;

    ink::ToggleChangedCallback ToggleChanged; // 240
    bool autoToggleOnInput; // 278
    bool isToggled; // 279
    uint8_t unk27A[0x280 - 0x27A]; // 27A
};
RED4EXT_ASSERT_SIZE(ToggleController, 0x280);
} // namespace ink
using inkToggleController = ink::ToggleController;
} // namespace RED4ext

// clang-format on
