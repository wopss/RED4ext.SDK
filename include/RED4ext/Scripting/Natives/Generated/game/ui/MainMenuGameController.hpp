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
    static constexpr const char* ALIAS = NAME;

    ink::CompoundWidgetReference backgroundContainer; // 140
    uint8_t unk158[0x190 - 0x158]; // 158
};
RED4EXT_ASSERT_SIZE(MainMenuGameController, 0x190);
} // namespace game::ui
} // namespace RED4ext
