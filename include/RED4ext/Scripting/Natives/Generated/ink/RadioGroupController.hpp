#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/RadioGroupChangedCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct RadioGroupController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkRadioGroupController";
    static constexpr const char* ALIAS = NAME;

    ink::RadioGroupChangedCallback ValueChanged; // 78
    int32_t selectedIndex; // B0
    bool alwaysToggled; // B4
    uint8_t unkB5[0xB8 - 0xB5]; // B5
    DynArray<ink::WidgetReference> toggleRefs; // B8
    uint8_t unkC8[0xD8 - 0xC8]; // C8
};
RED4EXT_ASSERT_SIZE(RadioGroupController, 0xD8);
} // namespace ink
using inkRadioGroupController = ink::RadioGroupController;
} // namespace RED4ext

// clang-format on
