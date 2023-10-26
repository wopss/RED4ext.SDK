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
struct __declspec(align(0x10)) VerticalPanelWidget : ink::BasePanelWidget
{
    static constexpr const char* NAME = "inkVerticalPanelWidget";
    static constexpr const char* ALIAS = "inkVerticalPanel";

};
RED4EXT_ASSERT_SIZE(VerticalPanelWidget, 0x240);
} // namespace ink
using inkVerticalPanelWidget = ink::VerticalPanelWidget;
using inkVerticalPanel = ink::VerticalPanelWidget;
} // namespace RED4ext

// clang-format on
