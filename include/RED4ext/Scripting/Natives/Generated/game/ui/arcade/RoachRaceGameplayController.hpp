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
namespace game::ui::arcade { 
struct RoachRaceGameplayController : game::ui::arcade::ArcadeGameplayController
{
    static constexpr const char* NAME = "gameuiarcadeRoachRaceGameplayController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk110[0x198 - 0x110]; // 110
    ink::TextWidgetReference currentLevelAndCycleText; // 198
    ink::TextWidgetReference pointsBoostPickupText; // 1B0
    ink::WidgetReference player; // 1C8
    ink::WidgetReference dummy; // 1E0
    ink::WidgetReference invincibilityCooldownIndicator; // 1F8
    ink::WidgetReference obstacleSpawner; // 210
    ink::WidgetReference background; // 228
    uint8_t unk240[0x2AC - 0x240]; // 240
    float defaultWorldVelocity; // 2AC
    uint8_t unk2B0[0x2B4 - 0x2B0]; // 2B0
    float cycleWorldVelocityMultiplier; // 2B4
    float carrotPowerupPointsPerSecond; // 2B8
    float carrotPowerupTime; // 2BC
    uint8_t unk2C0[0x2C4 - 0x2C0]; // 2C0
    float carrotPowerupWorldVelocityMultiplier; // 2C4
    CName powerupPickupSFX; // 2C8
    CName collisionSFX; // 2D0
    uint8_t unk2D8[0x2E0 - 0x2D8]; // 2D8
};
RED4EXT_ASSERT_SIZE(RoachRaceGameplayController, 0x2E0);
} // namespace game::ui::arcade
} // namespace RED4ext

// clang-format on
