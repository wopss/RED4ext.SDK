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
struct RoachRaceCloudSpawnerController : game::ui::arcade::ArcadeSpawnerController
{
    static constexpr const char* NAME = "gameuiarcadeRoachRaceCloudSpawnerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0xD4 - 0xD0]; // D0
    float minCloudRelativeVelocity; // D4
    float maxCloudRelativeVelocity; // D8
    float cloudSpawnTime; // DC
    uint8_t unkE0[0xE8 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(RoachRaceCloudSpawnerController, 0xE8);
} // namespace game::ui::arcade
using gameuiarcadeRoachRaceCloudSpawnerController = game::ui::arcade::RoachRaceCloudSpawnerController;
} // namespace RED4ext

// clang-format on
