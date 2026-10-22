#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
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

    uint8_t unk240[0x280 - 0x240]; // 240
    DynArray<ink::WidgetReference> widgetTemplates; // 280
    uint8_t unk290[0x29C - 0x290]; // 290
    minimap::ui::Settings settings; // 29C
    uint8_t unk2A4[0x380 - 0x2A4]; // 2A4
};
RED4EXT_ASSERT_SIZE(GeometryWidget, 0x380);
} // namespace minimap::ui
using minimapuiGeometryWidget = minimap::ui::GeometryWidget;
} // namespace RED4ext

// clang-format on
