#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterLevelType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterLevelController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeShooterLevelController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x108 - 0x78]; // 78
    Vector2 mapEndBorder; // 108
    ink::WidgetReference playerSpawnPoint; // 110
    ink::WidgetReference background; // 128
    ink::WidgetReference collision; // 140
    ink::WidgetReference spawner; // 158
    ink::WidgetReference enemyBulletSpawner; // 170
    ink::WidgetReference playerBulletSpawner; // 188
    ink::WidgetReference vfxSpawner; // 1A0
    game::ui::arcade::ShooterLevelType levelType; // 1B8
    uint8_t unk1BC[0x280 - 0x1BC]; // 1BC
};
RED4EXT_ASSERT_SIZE(ShooterLevelController, 0x280);
} // namespace game::ui::arcade
using gameuiarcadeShooterLevelController = game::ui::arcade::ShooterLevelController;
} // namespace RED4ext

// clang-format on
