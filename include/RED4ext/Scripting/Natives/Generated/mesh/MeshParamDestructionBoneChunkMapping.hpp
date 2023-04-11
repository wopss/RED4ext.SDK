#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParamDestructionBoneChunkMapping : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamDestructionBoneChunkMapping";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint64_t> boneChunkMasks; // 30
};
RED4EXT_ASSERT_SIZE(MeshParamDestructionBoneChunkMapping, 0x40);
} // namespace mesh
using meshMeshParamDestructionBoneChunkMapping = mesh::MeshParamDestructionBoneChunkMapping;
} // namespace RED4ext

// clang-format on
