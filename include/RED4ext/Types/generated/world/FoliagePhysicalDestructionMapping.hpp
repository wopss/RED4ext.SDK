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

    CName audioMetadata; // 60
    physics::DestructionParams destructionParams; // 68
    uint8_t unkAC[0xB0 - 0xAC]; // AC
    DynArray<physics::DestructionLevelData> destructionLevelData; // B0
    uint8_t unkC0[0xE8 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(FoliagePhysicalDestructionMapping, 0xE8);
} // namespace world
} // namespace RED4ext
