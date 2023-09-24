#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/NavGenAgentSize.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/OffMeshConnectionsData.hpp>

namespace RED4ext
{
namespace world
{
struct NavigationTileData
{
    static constexpr const char* NAME = "worldNavigationTileData";
    static constexpr const char* ALIAS = NAME;

    world::OffMeshConnectionsData offMeshConnections; // 00
    uint32_t bufferIndex; // A0
    int32_t tileX; // A4
    int32_t tileY; // A8
    uint32_t tileIndex; // AC
    uint8_t unkB0[0xB4 - 0xB0]; // B0
    NavGenAgentSize agentSize; // B4
    uint64_t tileRef; // B8
    DynArray<uint32_t> activeVariantIDs; // C0
    DynArray<uint32_t> allVariantIDs; // D0
};
RED4EXT_ASSERT_SIZE(NavigationTileData, 0xE0);
} // namespace world
using worldNavigationTileData = world::NavigationTileData;
} // namespace RED4ext

// clang-format on
