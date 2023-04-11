#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParamTopologyMetadata : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamTopologyMetadata";
    static constexpr const char* ALIAS = NAME;

    DataBuffer data; // 30
    DynArray<uint32_t> offsets; // 58
    DynArray<uint32_t> sizes; // 68
};
RED4EXT_ASSERT_SIZE(MeshParamTopologyMetadata, 0x78);
} // namespace mesh
using meshMeshParamTopologyMetadata = mesh::MeshParamTopologyMetadata;
} // namespace RED4ext

// clang-format on
