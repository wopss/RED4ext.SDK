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

    uint8_t unk230[0x268 - 0x230]; // 230
    DynArray<ink::WidgetReference> widgetTemplates; // 268
    uint8_t unk278[0x284 - 0x278]; // 278
    minimap::ui::Settings settings; // 284
    uint8_t unk28C[0x380 - 0x28C]; // 28C
};
RED4EXT_ASSERT_SIZE(GeometryWidget, 0x380);
} // namespace minimap::ui
} // namespace RED4ext
