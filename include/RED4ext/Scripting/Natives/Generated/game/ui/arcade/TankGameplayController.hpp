#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeGameplayController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct TankGameplayController : game::ui::arcade::ArcadeGameplayController
{
    static constexpr const char* NAME = "gameuiarcadeTankGameplayController";
    static constexpr const char* ALIAS = NAME;

    ink::WidgetReference player; // 118
    ink::WidgetReference enemySpawner; // 130
    ink::WidgetReference obstacleSpawner; // 148
    ink::WidgetReference pickupSpawner; // 160
    ink::WidgetReference projectileSpawner; // 178
    ink::WidgetReference background; // 190
    ink::WidgetReference hudCounter; // 1A8
    ink::WidgetReference hudScoreMultiplier; // 1C0
    uint8_t unk1D8[0x2B0 - 0x1D8]; // 1D8
};
RED4EXT_ASSERT_SIZE(TankGameplayController, 0x2B0);
} // namespace game::ui::arcade
using gameuiarcadeTankGameplayController = game::ui::arcade::TankGameplayController;
} // namespace RED4ext

// clang-format on
