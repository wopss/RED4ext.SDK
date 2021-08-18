#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ShapeWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct ComboBoxObjectController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkComboBoxObjectController";
    static constexpr const char* ALIAS = NAME;

    ink::ShapeWidgetReference colliderRef; // 68
    ink::WidgetReference placeholderOffsetWidgetRef; // 80
    ink::WidgetReference contentWidgetRef; // 98
    uint8_t unkB0[0xC4 - 0xB0]; // B0
    ink::Margin offset; // C4
    uint8_t unkD4[0xE8 - 0xD4]; // D4
};
RED4EXT_ASSERT_SIZE(ComboBoxObjectController, 0xE8);
} // namespace ink
} // namespace RED4ext
