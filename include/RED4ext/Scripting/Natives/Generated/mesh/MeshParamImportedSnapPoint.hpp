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
namespace mesh { struct MeshImportedSnapPoint; }

namespace mesh
{
struct MeshParamImportedSnapPoint : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamImportedSnapPoint";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<mesh::MeshImportedSnapPoint>> snapFeatureData; // 30
};
RED4EXT_ASSERT_SIZE(MeshParamImportedSnapPoint, 0x40);
} // namespace mesh
using meshMeshParamImportedSnapPoint = mesh::MeshParamImportedSnapPoint;
} // namespace RED4ext

// clang-format on
