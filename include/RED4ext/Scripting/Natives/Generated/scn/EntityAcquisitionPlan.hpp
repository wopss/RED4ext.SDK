#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace scn {
enum class EntityAcquisitionPlan : int32_t
{
    findInContext = 1,
    findInWorld = 2,
    spawnDespawn = 3,
    findInEntity = 4,
    spawnSet = 5,
    community = 6,
    spawner = 7,
    findInNode = 8,
    findNetworkPlayer = 9,
};
} // namespace scn
using scnEntityAcquisitionPlan = scn::EntityAcquisitionPlan;
} // namespace RED4ext

// clang-format on
