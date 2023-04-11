#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/ChunkIndicesOffset.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParamDestructionChunkIndicesOffsets : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamDestructionChunkIndicesOffsets";
    static constexpr const char* ALIAS = NAME;

    DynArray<mesh::ChunkIndicesOffset> offsets; // 30
    DynArray<uint32_t> chunkOffsets; // 40
    DynArray<DataBuffer> indices; // 50
};
RED4EXT_ASSERT_SIZE(MeshParamDestructionChunkIndicesOffsets, 0x60);
} // namespace mesh
using meshMeshParamDestructionChunkIndicesOffsets = mesh::MeshParamDestructionChunkIndicesOffsets;
} // namespace RED4ext

// clang-format on
