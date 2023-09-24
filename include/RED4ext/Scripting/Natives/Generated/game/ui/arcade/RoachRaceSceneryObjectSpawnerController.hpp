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
struct RoachRaceSceneryObjectSpawnerController : game::ui::arcade::ArcadeSpawnerController
{
    static constexpr const char* NAME = "gameuiarcadeRoachRaceSceneryObjectSpawnerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0xE8 - 0xD0]; // D0
    float sceneryObjectSpawnTime; // E8
    uint8_t unkEC[0xF8 - 0xEC]; // EC
};
RED4EXT_ASSERT_SIZE(RoachRaceSceneryObjectSpawnerController, 0xF8);
} // namespace game::ui::arcade
using gameuiarcadeRoachRaceSceneryObjectSpawnerController = game::ui::arcade::RoachRaceSceneryObjectSpawnerController;
} // namespace RED4ext

// clang-format on
