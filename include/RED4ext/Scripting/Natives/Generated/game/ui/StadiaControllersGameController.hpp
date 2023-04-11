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

    uint8_t unkF0[0xF8 - 0xF0]; // F0
    ink::WidgetReference stadiaControllerPage; // F8
    ink::WidgetReference nintendoControllerPage; // 110
    ink::WidgetReference durangoControllerPage; // 128
    ink::WidgetReference orbisControllerPage; // 140
    ink::WidgetReference disclaimerText; // 158
    uint8_t unk170[0x1A0 - 0x170]; // 170
};
RED4EXT_ASSERT_SIZE(StadiaControllersGameController, 0x1A0);
} // namespace game::ui
using gameuiStadiaControllersGameController = game::ui::StadiaControllersGameController;
using StadiaControllersGameController = game::ui::StadiaControllersGameController;
} // namespace RED4ext

// clang-format on
