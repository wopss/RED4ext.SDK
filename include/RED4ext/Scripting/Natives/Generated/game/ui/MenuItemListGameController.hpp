#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SaveHandlingController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MenuItemListGameController : game::ui::SaveHandlingController
{
    static constexpr const char* NAME = "gameuiMenuItemListGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk160[0x180 - 0x160]; // 160
};
RED4EXT_ASSERT_SIZE(MenuItemListGameController, 0x180);
} // namespace game::ui
using gameuiMenuItemListGameController = game::ui::MenuItemListGameController;
} // namespace RED4ext

// clang-format on
