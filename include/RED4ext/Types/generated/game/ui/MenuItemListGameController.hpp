#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/SaveHandlingController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MenuItemListGameController : game::ui::SaveHandlingController
{
    static constexpr const char* NAME = "gameuiMenuItemListGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x140 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(MenuItemListGameController, 0x140);
} // namespace game::ui
} // namespace RED4ext
