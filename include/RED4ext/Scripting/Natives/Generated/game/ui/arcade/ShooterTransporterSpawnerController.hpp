#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterTransporterSpawnData.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterTransporterSpawnerController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeShooterTransporterSpawnerController";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::ui::arcade::ShooterTransporterSpawnData> choosenOnes; // 78
    DynArray<game::ui::arcade::ShooterTransporterSpawnData> choosenMounts; // 88
    bool isRandomSpawn; // 98
    uint8_t unk99[0x9C - 0x99]; // 99
    float spawnDelay; // 9C
    uint8_t unkA0[0xE0 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(ShooterTransporterSpawnerController, 0xE0);
} // namespace game::ui::arcade
using gameuiarcadeShooterTransporterSpawnerController = game::ui::arcade::ShooterTransporterSpawnerController;
} // namespace RED4ext

// clang-format on
