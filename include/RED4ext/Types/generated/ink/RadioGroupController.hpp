#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/ink/RadioGroupChangedCallback.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct RadioGroupController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkRadioGroupController";
    static constexpr const char* ALIAS = NAME;

    ink::RadioGroupChangedCallback ValueChanged; // 68
    int32_t selectedIndex; // A0
    bool alwaysToggled; // A4
    uint8_t unkA5[0xA8 - 0xA5]; // A5
    DynArray<ink::WidgetReference> toggleRefs; // A8
    uint8_t unkB8[0xC8 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(RadioGroupController, 0xC8);
} // namespace ink
} // namespace RED4ext
