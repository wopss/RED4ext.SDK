#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace population { 
enum class SpawnerObjectCtrlAction : uint8_t
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
} // namespace RED4ext
