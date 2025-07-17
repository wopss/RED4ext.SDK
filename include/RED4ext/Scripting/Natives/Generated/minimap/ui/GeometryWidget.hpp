#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CanvasWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/minimap/ui/Settings.hpp>

namespace RED4ext
{
namespace minimap::ui
{
struct GeometryWidget : ink::CanvasWidget
{
    static constexpr const char* NAME = "minimapuiGeometryWidget";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x270 - 0x230]; // 230
    DynArray<ink::WidgetReference> widgetTemplates; // 270
    uint8_t unk280[0x28C - 0x280]; // 280
    minimap::ui::Settings settings; // 28C
    uint8_t unk294[0x380 - 0x294]; // 294
};
RED4EXT_ASSERT_SIZE(GeometryWidget, 0x380);
} // namespace minimap::ui
using minimapuiGeometryWidget = minimap::ui::GeometryWidget;
} // namespace RED4ext

// clang-format on
