#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Margin.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ShapeWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink
{
struct ComboBoxObjectController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "inkComboBoxObjectController";
    static constexpr const char* ALIAS = NAME;

    ink::ShapeWidgetReference colliderRef; // 78
    ink::WidgetReference placeholderOffsetWidgetRef; // 90
    ink::WidgetReference contentWidgetRef; // A8
    uint8_t unkC0[0xD4 - 0xC0]; // C0
    ink::Margin offset; // D4
    uint8_t unkE4[0xF8 - 0xE4]; // E4
};
RED4EXT_ASSERT_SIZE(ComboBoxObjectController, 0xF8);
} // namespace ink
using inkComboBoxObjectController = ink::ComboBoxObjectController;
} // namespace RED4ext

// clang-format on
