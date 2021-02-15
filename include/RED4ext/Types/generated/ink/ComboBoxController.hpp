#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/ComboBoxVisibleChangedCallback.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct ComboBoxController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkComboBoxController";
    static constexpr const char* ALIAS = NAME;

    ink::ComboBoxVisibleChangedCallback ComboBoxVisibleChanged; // 68
    ink::WidgetReference comboBoxObjectRef; // A0
    uint8_t unkB8[0xD8 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(ComboBoxController, 0xD8);
} // namespace ink
} // namespace RED4ext
