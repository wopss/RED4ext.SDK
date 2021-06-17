#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/physics/DestructionLevelData.hpp>
#include <RED4ext/Types/generated/physics/DestructionParams.hpp>
#include <RED4ext/Types/generated/world/FoliageDestructionMapping.hpp>

namespace RED4ext
{
namespace world { 
struct FoliagePhysicalDestructionMapping : world::FoliageDestructionMapping
{
    static constexpr const char* NAME = "worldFoliagePhysicalDestructionMapping";
    static constexpr const char* ALIAS = NAME;

    CName audioMetadata; // 68
    physics::DestructionParams destructionParams; // 70
    uint8_t unkB4[0xB8 - 0xB4]; // B4
    DynArray<physics::DestructionLevelData> destructionLevelData; // B8
};
RED4EXT_ASSERT_SIZE(FoliagePhysicalDestructionMapping, 0xC8);
} // namespace world
} // namespace RED4ext
