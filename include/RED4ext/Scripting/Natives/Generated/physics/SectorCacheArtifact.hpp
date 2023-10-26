#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/GeometryKey.hpp>

namespace RED4ext
{
namespace physics { struct GeometryCacheArtifact; }

namespace physics
{
struct __declspec(align(0x10)) SectorCacheArtifact : CResource
{
    static constexpr const char* NAME = "physicsSectorCacheArtifact";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::GeometryCacheArtifact> sectorInPlaceGeometry; // 40
    DynArray<physics::GeometryKey> sectorGeometryKeys; // 50
    Box sectorBounds; // 60
};
RED4EXT_ASSERT_SIZE(SectorCacheArtifact, 0x80);
} // namespace physics
using physicsSectorCacheArtifact = physics::SectorCacheArtifact;
} // namespace RED4ext

// clang-format on
