#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IWidgetComponentWrapper.hpp>

namespace RED4ext
{
namespace world::ui
{
struct __declspec(align(0x10)) WorldLayerWidget : ink::IWidgetComponentWrapper
{
    static constexpr const char* NAME = "worlduiWorldLayerWidget";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x70 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(WorldLayerWidget, 0x70);
} // namespace world::ui
using worlduiWorldLayerWidget = world::ui::WorldLayerWidget;
} // namespace RED4ext

// clang-format on
