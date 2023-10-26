#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/GeometryKey.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SectorCacheEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/SectorEntry.hpp>

namespace RED4ext
{
namespace physics
{
struct __declspec(align(0x10)) GeometryCache : CResource
{
    static constexpr const char* NAME = "physicsGeometryCache";
    static constexpr const char* ALIAS = NAME;

    DynArray<DeferredDataBuffer> bufferTableSectors; // 40
    DynArray<physics::SectorEntry> sectorEntries; // 50
    DynArray<physics::GeometryKey> sectorGeometries; // 60
    DynArray<physics::SectorCacheEntry> sectorCacheEntries; // 70
    DeferredDataBuffer alwaysLoadedSectorDDB; // 80
    uint8_t unkD8[0xE0 - 0xD8]; // D8
    physics::SectorEntry alwaysLoadedSector; // E0
    uint8_t unk120[0x190 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(GeometryCache, 0x190);
} // namespace physics
using physicsGeometryCache = physics::GeometryCache;
} // namespace RED4ext

// clang-format on
