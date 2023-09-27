#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeSpawnerController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct RoachRaceObstacleSpawnerController : game::ui::arcade::ArcadeSpawnerController
{
    static constexpr const char* NAME = "gameuiarcadeRoachRaceObstacleSpawnerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0x13C - 0xD0]; // D0
    float initialMinimumSpawnTime; // 13C
    uint8_t unk140[0x144 - 0x140]; // 140
    float spawnRateIncreasePerCycle; // 144
    float doubleSpawnDelay; // 148
    float initialDoubleSpawnChance; // 14C
    float doubleSpawnChanceIncreasePerLevel; // 150
    uint8_t unk154[0x168 - 0x154]; // 154
    float powerupSpawnTimeDelayMultiplier; // 168
    float carrotSpawnTime; // 16C
    uint8_t unk170[0x174 - 0x170]; // 170
    float appleSpawnTime; // 174
    uint8_t unk178[0x188 - 0x178]; // 178
};
RED4EXT_ASSERT_SIZE(RoachRaceObstacleSpawnerController, 0x188);
} // namespace game::ui::arcade
using gameuiarcadeRoachRaceObstacleSpawnerController = game::ui::arcade::RoachRaceObstacleSpawnerController;
} // namespace RED4ext

// clang-format on
