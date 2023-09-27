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
struct TankProjectileSpawnerController : game::ui::arcade::ArcadeSpawnerController
{
    static constexpr const char* NAME = "gameuiarcadeTankProjectileSpawnerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0xF8 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(TankProjectileSpawnerController, 0xF8);
} // namespace game::ui::arcade
using gameuiarcadeTankProjectileSpawnerController = game::ui::arcade::TankProjectileSpawnerController;
} // namespace RED4ext

// clang-format on
