#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SelectionChangeCallback.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink
{
struct SelectorController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkSelectorController";
    static constexpr const char* ALIAS = "SelectorController";

    ink::SelectionChangeCallback SelectionChanged; // 78
    int32_t index; // B0
    bool cycledNavigation; // B4
    uint8_t unkB5[0xB8 - 0xB5]; // B5
    DynArray<CString> values; // B8
};
RED4EXT_ASSERT_SIZE(SelectorController, 0xC8);
} // namespace ink
using inkSelectorController = ink::SelectorController;
using SelectorController = ink::SelectorController;
} // namespace RED4ext

// clang-format on
