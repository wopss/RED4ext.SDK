#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/NavGenAgentSize.hpp>
#include <RED4ext/Types/generated/world/OffMeshConnectionsData.hpp>

namespace RED4ext
{
namespace world { 
struct NavigationTileData
{
    static constexpr const char* NAME = "worldNavigationTileData";
    static constexpr const char* ALIAS = NAME;

    int32_t tileX; // 00
    int32_t tileY; // 04
    int32_t tileLayer; // 08
    NavGenAgentSize agentSize; // 0C
    DataBuffer tilesBuffer; // 10
    world::OffMeshConnectionsData offMeshConnections; // 38
    bool regenerable; // D8
    uint8_t unkD9[0xE0 - 0xD9]; // D9
};
RED4EXT_ASSERT_SIZE(NavigationTileData, 0xE0);
} // namespace world
} // namespace RED4ext
