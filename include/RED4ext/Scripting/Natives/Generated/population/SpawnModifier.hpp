#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/population/Modifier.hpp>

namespace RED4ext
{
namespace game { struct ObjectSpawnParameter; }

namespace population
{
struct SpawnModifier : population::Modifier
{
    static constexpr const char* NAME = "populationSpawnModifier";
    static constexpr const char* ALIAS = NAME;

    Handle<game::ObjectSpawnParameter> spawnParameter; // 30
};
RED4EXT_ASSERT_SIZE(SpawnModifier, 0x40);
} // namespace population
using populationSpawnModifier = population::SpawnModifier;
} // namespace RED4ext

// clang-format on
