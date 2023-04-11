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
struct SettingsMenuGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiSettingsMenuGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkF0[0x108 - 0xF0]; // F0
};
RED4EXT_ASSERT_SIZE(SettingsMenuGameController, 0x108);
} // namespace game::ui
using gameuiSettingsMenuGameController = game::ui::SettingsMenuGameController;
} // namespace RED4ext

// clang-format on
