#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/AlwaysSpawnedState.hpp>
#include <RED4ext/Types/generated/game/SpawnInViewState.hpp>
#include <RED4ext/Types/generated/world/Node.hpp>

namespace RED4ext
{
namespace world { 
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
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(PopulationSpawnerNode, 0x50);
} // namespace world
} // namespace RED4ext
