#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world {
enum class ProxyMeshOutputType : int8_t
{
    RayScan = 0,
    SurfaceReconstruction = 1,
    LegacyFromVoxels = 2,
    FromCustomMesh = 3,
    FromBoxes = 4,
    FromCollision = 5,
    FromConvexHull = 6,
    BoundsCombine = 7,
    BlobCrowd = 8,
    ReduceTarps = 9,
    KeepCurrent = 127,
};
} // namespace world
using worldProxyMeshOutputType = world::ProxyMeshOutputType;
} // namespace RED4ext

// clang-format on
