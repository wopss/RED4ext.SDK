#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct StadiaControllersGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiStadiaControllersGameController";
    static constexpr const char* ALIAS = "StadiaControllersGameController";

    uint8_t unk100[0x108 - 0x100]; // 100
    ink::WidgetReference stadiaControllerPage; // 108
    ink::WidgetReference nintendoControllerPage; // 120
    ink::WidgetReference durangoControllerPage; // 138
    ink::WidgetReference orbisControllerPage; // 150
    ink::WidgetReference disclaimerText; // 168
    uint8_t unk180[0x1B0 - 0x180]; // 180
};
RED4EXT_ASSERT_SIZE(StadiaControllersGameController, 0x1B0);
} // namespace game::ui
using gameuiStadiaControllersGameController = game::ui::StadiaControllersGameController;
using StadiaControllersGameController = game::ui::StadiaControllersGameController;
} // namespace RED4ext

// clang-format on
