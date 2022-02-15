#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuItemListGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct MainMenuGameController : game::ui::MenuItemListGameController
{
    static constexpr const char* NAME = "gameuiMainMenuGameController";
    static constexpr const char* ALIAS = "MainMenuGameController";

    ink::CompoundWidgetReference backgroundContainer; // 170
    uint8_t unk188[0x1C0 - 0x188]; // 188
};
RED4EXT_ASSERT_SIZE(MainMenuGameController, 0x1C0);
} // namespace game::ui
using MainMenuGameController = game::ui::MainMenuGameController;
} // namespace RED4ext
