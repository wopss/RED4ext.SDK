#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenAgentSize.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/OffMeshConnectionsData.hpp>

namespace RED4ext
{
namespace world { 
struct NavigationTileData
{
    static constexpr const char* NAME = "worldNavigationTileData";
    static constexpr const char* ALIAS = NAME;

    world::OffMeshConnectionsData offMeshConnections; // 00
    DataBuffer tilesBuffer; // A0
    int32_t tileX; // C8
    int32_t tileY; // CC
    NavGenAgentSize agentSize; // D0
    uint8_t unkD4[0xD8 - 0xD4]; // D4
};
RED4EXT_ASSERT_SIZE(NavigationTileData, 0xD8);
} // namespace world
} // namespace RED4ext
