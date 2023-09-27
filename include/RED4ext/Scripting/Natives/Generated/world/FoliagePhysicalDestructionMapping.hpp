#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/DestructionLevelData.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/DestructionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/FoliageDestructionMapping.hpp>

namespace RED4ext
{
namespace world
{
struct FoliagePhysicalDestructionMapping : world::FoliageDestructionMapping
{
    static constexpr const char* NAME = "worldFoliagePhysicalDestructionMapping";
    static constexpr const char* ALIAS = NAME;

    CName audioMetadata; // 68
    physics::DestructionParams destructionParams; // 70
    DynArray<physics::DestructionLevelData> destructionLevelData; // C0
};
RED4EXT_ASSERT_SIZE(FoliagePhysicalDestructionMapping, 0xD0);
} // namespace world
using worldFoliagePhysicalDestructionMapping = world::FoliagePhysicalDestructionMapping;
} // namespace RED4ext

// clang-format on
