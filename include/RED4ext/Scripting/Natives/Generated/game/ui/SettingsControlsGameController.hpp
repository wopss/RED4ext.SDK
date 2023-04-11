#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SettingsControlsGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiSettingsControlsGameController";
    static constexpr const char* ALIAS = "SettingsControlsGameController";

};
RED4EXT_ASSERT_SIZE(SettingsControlsGameController, 0xF0);
} // namespace game::ui
using gameuiSettingsControlsGameController = game::ui::SettingsControlsGameController;
using SettingsControlsGameController = game::ui::SettingsControlsGameController;
} // namespace RED4ext

// clang-format on
