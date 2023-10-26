#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BasePanelWidget.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) HorizontalPanelWidget : ink::BasePanelWidget
{
    static constexpr const char* NAME = "inkHorizontalPanelWidget";
    static constexpr const char* ALIAS = "inkHorizontalPanel";

};
RED4EXT_ASSERT_SIZE(HorizontalPanelWidget, 0x240);
} // namespace ink
using inkHorizontalPanelWidget = ink::HorizontalPanelWidget;
using inkHorizontalPanel = ink::HorizontalPanelWidget;
} // namespace RED4ext

// clang-format on
