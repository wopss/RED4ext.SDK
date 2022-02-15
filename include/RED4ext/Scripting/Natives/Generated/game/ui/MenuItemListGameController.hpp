#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SaveHandlingController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MenuItemListGameController : game::ui::SaveHandlingController
{
    static constexpr const char* NAME = "gameuiMenuItemListGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk150[0x170 - 0x150]; // 150
};
RED4EXT_ASSERT_SIZE(MenuItemListGameController, 0x170);
} // namespace game::ui
} // namespace RED4ext
