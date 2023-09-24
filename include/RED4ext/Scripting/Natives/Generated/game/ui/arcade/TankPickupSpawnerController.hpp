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
struct TankPickupSpawnerController : game::ui::arcade::ArcadeSpawnerController
{
    static constexpr const char* NAME = "gameuiarcadeTankPickupSpawnerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0xF0 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(TankPickupSpawnerController, 0xF0);
} // namespace game::ui::arcade
using gameuiarcadeTankPickupSpawnerController = game::ui::arcade::TankPickupSpawnerController;
} // namespace RED4ext

// clang-format on
