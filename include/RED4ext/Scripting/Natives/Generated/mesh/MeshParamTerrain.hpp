#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParamTerrain : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamTerrain";
    static constexpr const char* ALIAS = NAME;

    DynArray<Box> chunkBoundingBoxes; // 30
};
RED4EXT_ASSERT_SIZE(MeshParamTerrain, 0x40);
} // namespace mesh
using meshMeshParamTerrain = mesh::MeshParamTerrain;
} // namespace RED4ext

// clang-format on
