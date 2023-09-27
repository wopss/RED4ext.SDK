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
struct ShooterSpawnerController : game::ui::arcade::ArcadeSpawnerController
{
    static constexpr const char* NAME = "gameuiarcadeShooterSpawnerController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0x150 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(ShooterSpawnerController, 0x150);
} // namespace game::ui::arcade
using gameuiarcadeShooterSpawnerController = game::ui::arcade::ShooterSpawnerController;
} // namespace RED4ext

// clang-format on
