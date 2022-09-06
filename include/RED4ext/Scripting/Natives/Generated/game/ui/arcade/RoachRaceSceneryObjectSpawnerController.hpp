#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeSpawnerController.hpp>

namespace RED4ext
{
namespace game::ui::arcade { 
struct RoachRaceSceneryObjectSpawnerController : game::ui::arcade::ArcadeSpawnerController
{
    static constexpr const char* NAME = "gameuiarcadeRoachRaceSceneryObjectSpawnerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0xE0 - 0xD0]; // D0
    float sceneryObjectSpawnTime; // E0
    uint8_t unkE4[0xF0 - 0xE4]; // E4
};
RED4EXT_ASSERT_SIZE(RoachRaceSceneryObjectSpawnerController, 0xF0);
} // namespace game::ui::arcade
} // namespace RED4ext
