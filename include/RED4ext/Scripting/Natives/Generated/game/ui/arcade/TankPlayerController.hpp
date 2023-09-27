#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadePlayerController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct TankPlayerController : game::ui::arcade::ArcadePlayerController
{
    static constexpr const char* NAME = "gameuiarcadeTankPlayerController";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetReference avatarRef; // 90
    ink::WidgetReference health; // A8
    ink::WidgetReference lives; // C0
    ink::WidgetReference aeams; // D8
    ink::WidgetReference projectileSpawner; // F0
    uint8_t unk108[0x2C8 - 0x108]; // 108
};
RED4EXT_ASSERT_SIZE(TankPlayerController, 0x2C8);
} // namespace game::ui::arcade
using gameuiarcadeTankPlayerController = game::ui::arcade::TankPlayerController;
} // namespace RED4ext

// clang-format on
