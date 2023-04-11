#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LayerDefinition.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryResource; }

namespace ink
{
struct SystemNotificationsLayerDefinition : ink::LayerDefinition
{
    static constexpr const char* NAME = "inkSystemNotificationsLayerDefinition";
    static constexpr const char* ALIAS = NAME;

    Ref<ink::WidgetLibraryResource> cursorResource; // 38
};
RED4EXT_ASSERT_SIZE(SystemNotificationsLayerDefinition, 0x50);
} // namespace ink
using inkSystemNotificationsLayerDefinition = ink::SystemNotificationsLayerDefinition;
} // namespace RED4ext

// clang-format on
