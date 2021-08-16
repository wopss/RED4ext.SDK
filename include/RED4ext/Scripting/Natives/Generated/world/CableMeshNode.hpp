#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/BendedMeshNode.hpp>

namespace RED4ext
{
namespace world { 
struct CableMeshNode : world::BendedMeshNode
{
    static constexpr const char* NAME = "worldCableMeshNode";
    static constexpr const char* ALIAS = NAME;

    NativeArray<uint64_t, 2> destructionHashes; // A0
    float cableLength; // B0
    float cableRadius; // B4
    uint8_t unkB8[0xC0 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(CableMeshNode, 0xC0);
} // namespace world
} // namespace RED4ext
