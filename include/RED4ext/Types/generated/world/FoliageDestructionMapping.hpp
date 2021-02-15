#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>

namespace RED4ext
{
struct CMesh;

namespace world { 
struct FoliageDestructionMapping : ISerializable
{
    static constexpr const char* NAME = "worldFoliageDestructionMapping";
    static constexpr const char* ALIAS = NAME;

    RaRef<CMesh> baseMesh; // 30
    RaRef<CMesh> destructibleMesh; // 38
    CName meshAppearance; // 40
    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(FoliageDestructionMapping, 0x60);
} // namespace world
} // namespace RED4ext
