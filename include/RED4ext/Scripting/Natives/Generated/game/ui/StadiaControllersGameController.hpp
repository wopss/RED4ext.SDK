#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui { 
struct StadiaControllersGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiStadiaControllersGameController";
    static constexpr const char* ALIAS = "StadiaControllersGameController";

    uint8_t unkD0[0xD8 - 0xD0]; // D0
    ink::WidgetReference stadiaControllerPage; // D8
    ink::WidgetReference nintendoControllerPage; // F0
    ink::WidgetReference durangoControllerPage; // 108
    ink::WidgetReference orbisControllerPage; // 120
    uint8_t unk138[0x168 - 0x138]; // 138
};
RED4EXT_ASSERT_SIZE(StadiaControllersGameController, 0x168);
} // namespace game::ui
using StadiaControllersGameController = game::ui::StadiaControllersGameController;
} // namespace RED4ext
