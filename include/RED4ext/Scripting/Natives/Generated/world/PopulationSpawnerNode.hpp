#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AlwaysSpawnedState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SpawnInViewState.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct PopulationSpawnerNode : world::Node
{
    static constexpr const char* NAME = "worldPopulationSpawnerNode";
    static constexpr const char* ALIAS = NAME;

    TweakDBID objectRecordId; // 38
    CName appearanceName; // 40
    bool spawnOnStart; // 48
    game::AlwaysSpawnedState alwaysSpawned; // 49
    game::SpawnInViewState spawnInView; // 4A
    bool prefetchAppearance; // 4B
    bool isVehicle; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
};
RED4EXT_ASSERT_SIZE(PopulationSpawnerNode, 0x50);
} // namespace world
using worldPopulationSpawnerNode = world::PopulationSpawnerNode;
} // namespace RED4ext

// clang-format on
