#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeGameplayController.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct RoachRaceGameplayController : game::ui::arcade::ArcadeGameplayController
{
    static constexpr const char* NAME = "gameuiarcadeRoachRaceGameplayController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk118[0x1A0 - 0x118]; // 118
    ink::TextWidgetReference currentLevelAndCycleText; // 1A0
    ink::TextWidgetReference pointsBoostPickupText; // 1B8
    ink::WidgetReference player; // 1D0
    ink::WidgetReference dummy; // 1E8
    ink::WidgetReference invincibilityCooldownIndicator; // 200
    ink::WidgetReference obstacleSpawner; // 218
    ink::WidgetReference background; // 230
    uint8_t unk248[0x2B4 - 0x248]; // 248
    float defaultWorldVelocity; // 2B4
    uint8_t unk2B8[0x2BC - 0x2B8]; // 2B8
    float cycleWorldVelocityMultiplier; // 2BC
    float carrotPowerupPointsPerSecond; // 2C0
    float carrotPowerupTime; // 2C4
    uint8_t unk2C8[0x2CC - 0x2C8]; // 2C8
    float carrotPowerupWorldVelocityMultiplier; // 2CC
    CName powerupPickupSFX; // 2D0
    CName collisionSFX; // 2D8
    uint8_t unk2E0[0x2E8 - 0x2E0]; // 2E0
};
RED4EXT_ASSERT_SIZE(RoachRaceGameplayController, 0x2E8);
} // namespace game::ui::arcade
using gameuiarcadeRoachRaceGameplayController = game::ui::arcade::RoachRaceGameplayController;
} // namespace RED4ext

// clang-format on
