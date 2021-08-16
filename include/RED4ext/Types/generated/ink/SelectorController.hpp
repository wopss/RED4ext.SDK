#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ink/SelectionChangeCallback.hpp>
#include <RED4ext/Types/generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct SelectorController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkSelectorController";
    static constexpr const char* ALIAS = "SelectorController";

    ink::SelectionChangeCallback SelectionChanged; // 68
    int32_t index; // A0
    bool cycledNavigation; // A4
    uint8_t unkA5[0xA8 - 0xA5]; // A5
    DynArray<CString> values; // A8
};
RED4EXT_ASSERT_SIZE(SelectorController, 0xB8);
} // namespace ink
using SelectorController = ink::SelectorController;
} // namespace RED4ext
