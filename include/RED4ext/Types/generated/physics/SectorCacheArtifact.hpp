#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/Box.hpp>
#include <RED4ext/Types/generated/CResource.hpp>
#include <RED4ext/Types/generated/physics/GeometryKey.hpp>

namespace RED4ext
{
namespace physics { 
struct SectorCacheArtifact : CResource
{
    static constexpr const char* NAME = "physicsSectorCacheArtifact";
    static constexpr const char* ALIAS = NAME;

    DynArray<physics::GeometryKey> sectorGeometries; // 40
    Box sectorBounds; // 50
};
RED4EXT_ASSERT_SIZE(SectorCacheArtifact, 0x70);
} // namespace physics
} // namespace RED4ext
