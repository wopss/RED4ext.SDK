#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ComboBoxVisibleChangedCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct ComboBoxController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkComboBoxController";
    static constexpr const char* ALIAS = NAME;

    ink::ComboBoxVisibleChangedCallback ComboBoxVisibleChanged; // 78
    ink::WidgetReference comboBoxObjectRef; // B0
    uint8_t unkC8[0xE8 - 0xC8]; // C8
};
RED4EXT_ASSERT_SIZE(ComboBoxController, 0xE8);
} // namespace ink
using inkComboBoxController = ink::ComboBoxController;
} // namespace RED4ext

// clang-format on
