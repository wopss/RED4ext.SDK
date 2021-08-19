#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CanvasWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/minimap/ui/Settings.hpp>

namespace RED4ext
{
namespace minimap::ui { 
struct GeometryWidget : ink::CanvasWidget
{
    static constexpr const char* NAME = "minimapuiGeometryWidget";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk220[0x258 - 0x220]; // 220
    DynArray<ink::WidgetReference> widgetTemplates; // 258
    uint8_t unk268[0x274 - 0x268]; // 268
    minimap::ui::Settings settings; // 274
    uint8_t unk27C[0x380 - 0x27C]; // 27C
};
RED4EXT_ASSERT_SIZE(GeometryWidget, 0x380);
} // namespace minimap::ui
} // namespace RED4ext
