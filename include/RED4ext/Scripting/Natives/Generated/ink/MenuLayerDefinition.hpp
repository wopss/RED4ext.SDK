#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LayerDefinition.hpp>

namespace RED4ext
{
namespace ink { struct MenuResource; }
namespace ink { struct WidgetLibraryResource; }

namespace ink
{
struct MenuLayerDefinition : ink::LayerDefinition
{
    static constexpr const char* NAME = "inkMenuLayerDefinition";
    static constexpr const char* ALIAS = NAME;

    Ref<ink::MenuResource> menuResource; // 38
    Ref<ink::WidgetLibraryResource> cursorResource; // 50
};
RED4EXT_ASSERT_SIZE(MenuLayerDefinition, 0x68);
} // namespace ink
using inkMenuLayerDefinition = ink::MenuLayerDefinition;
} // namespace RED4ext

// clang-format on
