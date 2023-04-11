#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GlobalNodeID.hpp>

namespace RED4ext
{
namespace world { struct OffMeshUserData; }

namespace world
{
struct OffMeshConnectionsData
{
    static constexpr const char* NAME = "worldOffMeshConnectionsData";
    static constexpr const char* ALIAS = NAME;

    DynArray<float> verts; // 00
    DynArray<float> radii; // 10
    DynArray<uint16_t> flags; // 20
    DynArray<uint8_t> areas; // 30
    DynArray<uint8_t> directions; // 40
    DynArray<uint64_t> ids; // 50
    DynArray<uint16_t> tagIntervals; // 60
    DynArray<CName> tagsX; // 70
    DynArray<world::GlobalNodeID> globalNodeIDs; // 80
    DynArray<Handle<world::OffMeshUserData>> userData; // 90
};
RED4EXT_ASSERT_SIZE(OffMeshConnectionsData, 0xA0);
} // namespace world
using worldOffMeshConnectionsData = world::OffMeshConnectionsData;
} // namespace RED4ext

// clang-format on
