#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace population {
enum class SpawnerObjectCtrlAction : int8_t
{
    Undefined = 0,
    Activate = 1,
    Deactivate = 2,
    Reactivate = 3,
    ResetKillCount = 4,
    Despawn = Deactivate,
    Respawn = Reactivate,
    Spawn = Activate,
};
} // namespace population
using populationSpawnerObjectCtrlAction = population::SpawnerObjectCtrlAction;
} // namespace RED4ext

// clang-format on
