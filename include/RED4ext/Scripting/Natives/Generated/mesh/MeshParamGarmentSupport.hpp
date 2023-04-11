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
struct MeshParamGarmentSupport : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamGarmentSupport";
    static constexpr const char* ALIAS = NAME;

    bool customMorph; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    DynArray<DynArray<uint32_t>> chunkCapVertices; // 38
};
RED4EXT_ASSERT_SIZE(MeshParamGarmentSupport, 0x48);
} // namespace mesh
using meshMeshParamGarmentSupport = mesh::MeshParamGarmentSupport;
} // namespace RED4ext

// clang-format on
