#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ControllerSettingsGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiControllerSettingsGameController";
    static constexpr const char* ALIAS = "ControllerSettingsGameController";

    DynArray<ink::WidgetReference> defaultWidgets; // 100
    DynArray<ink::WidgetReference> southpawWidgets; // 110
    DynArray<ink::WidgetReference> legacyWidgets; // 120
};
RED4EXT_ASSERT_SIZE(ControllerSettingsGameController, 0x130);
} // namespace game::ui
using gameuiControllerSettingsGameController = game::ui::ControllerSettingsGameController;
using ControllerSettingsGameController = game::ui::ControllerSettingsGameController;
} // namespace RED4ext

// clang-format on
