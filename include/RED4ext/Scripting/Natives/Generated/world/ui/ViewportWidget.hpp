#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CanvasWidget.hpp>

namespace RED4ext
{
namespace world::ui
{
struct __declspec(align(0x10)) ViewportWidget : ink::CanvasWidget
{
    static constexpr const char* NAME = "worlduiViewportWidget";
    static constexpr const char* ALIAS = "ViewportWidget";

    uint8_t unk230[0x240 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(ViewportWidget, 0x240);
} // namespace world::ui
using worlduiViewportWidget = world::ui::ViewportWidget;
using ViewportWidget = world::ui::ViewportWidget;
} // namespace RED4ext

// clang-format on
