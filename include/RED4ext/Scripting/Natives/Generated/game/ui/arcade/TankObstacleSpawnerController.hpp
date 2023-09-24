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
struct TankObstacleSpawnerController : game::ui::arcade::ArcadeSpawnerController
{
    static constexpr const char* NAME = "gameuiarcadeTankObstacleSpawnerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0x128 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(TankObstacleSpawnerController, 0x128);
} // namespace game::ui::arcade
using gameuiarcadeTankObstacleSpawnerController = game::ui::arcade::TankObstacleSpawnerController;
} // namespace RED4ext

// clang-format on
