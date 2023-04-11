#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParamDeformableShapesData : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamDeformableShapesData";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint8_t> ownerIndex; // 30
    DynArray<Transform> startingPose; // 40
    DynArray<Transform> finalPose; // 50
};
RED4EXT_ASSERT_SIZE(MeshParamDeformableShapesData, 0x60);
} // namespace mesh
using meshMeshParamDeformableShapesData = mesh::MeshParamDeformableShapesData;
} // namespace RED4ext

// clang-format on
