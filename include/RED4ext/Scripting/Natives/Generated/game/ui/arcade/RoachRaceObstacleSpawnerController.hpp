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

    uint8_t unkD0[0x134 - 0xD0]; // D0
    float initialMinimumSpawnTime; // 134
    uint8_t unk138[0x13C - 0x138]; // 138
    float spawnRateIncreasePerCycle; // 13C
    float doubleSpawnDelay; // 140
    float initialDoubleSpawnChance; // 144
    float doubleSpawnChanceIncreasePerLevel; // 148
    uint8_t unk14C[0x160 - 0x14C]; // 14C
    float powerupSpawnTimeDelayMultiplier; // 160
    float carrotSpawnTime; // 164
    uint8_t unk168[0x16C - 0x168]; // 168
    float appleSpawnTime; // 16C
    uint8_t unk170[0x180 - 0x170]; // 170
};
RED4EXT_ASSERT_SIZE(RoachRaceObstacleSpawnerController, 0x180);
} // namespace game::ui::arcade
using gameuiarcadeRoachRaceObstacleSpawnerController = game::ui::arcade::RoachRaceObstacleSpawnerController;
} // namespace RED4ext

// clang-format on
