#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace physics { struct ICollider; }

namespace mesh
{
struct MeshParamShadowMeshCreationData : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamShadowMeshCreationData";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<physics::ICollider>> geometries; // 30
    DynArray<int32_t> bonesPerGeometry; // 40
};
RED4EXT_ASSERT_SIZE(MeshParamShadowMeshCreationData, 0x50);
} // namespace mesh
using meshMeshParamShadowMeshCreationData = mesh::MeshParamShadowMeshCreationData;
} // namespace RED4ext

// clang-format on
