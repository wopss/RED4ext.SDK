#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CanvasWidget.hpp>

namespace RED4ext
{
namespace world::ui { 
struct ViewportWidget : ink::CanvasWidget
{
    static constexpr const char* NAME = "worlduiViewportWidget";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk220[0x230 - 0x220]; // 220
};
RED4EXT_ASSERT_SIZE(ViewportWidget, 0x230);
} // namespace world::ui
} // namespace RED4ext
