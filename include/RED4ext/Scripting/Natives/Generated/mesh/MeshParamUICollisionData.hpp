#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParamUICollisionData : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamUICollisionData";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector2> uvs; // 30
    DynArray<uint16_t> trianglesIndices; // 40
    DynArray<Vector3> vertices; // 50
};
RED4EXT_ASSERT_SIZE(MeshParamUICollisionData, 0x60);
} // namespace mesh
using meshMeshParamUICollisionData = mesh::MeshParamUICollisionData;
} // namespace RED4ext

// clang-format on
