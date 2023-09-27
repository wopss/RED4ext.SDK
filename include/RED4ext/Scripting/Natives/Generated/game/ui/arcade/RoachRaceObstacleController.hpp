#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeObjectController.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/BoundingRect.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct RoachRaceObstacleController : game::ui::arcade::ArcadeObjectController
{
    static constexpr const char* NAME = "gameuiarcadeRoachRaceObstacleController";
    static constexpr const char* ALIAS = NAME;

    game::ui::arcade::BoundingRect collider; // 100
    uint8_t unk168[0x178 - 0x168]; // 168
};
RED4EXT_ASSERT_SIZE(RoachRaceObstacleController, 0x178);
} // namespace game::ui::arcade
using gameuiarcadeRoachRaceObstacleController = game::ui::arcade::RoachRaceObstacleController;
} // namespace RED4ext

// clang-format on
