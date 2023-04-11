#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/GfxClothChunkData.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParamCloth_Graphical : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamCloth_Graphical";
    static constexpr const char* ALIAS = NAME;

    DynArray<mesh::GfxClothChunkData> chunks; // 30
    DynArray<DynArray<uint16_t>> lodChunkIndices; // 40
    DynArray<DynArray<DynArray<uint16_t>>> latchers; // 50
};
RED4EXT_ASSERT_SIZE(MeshParamCloth_Graphical, 0x60);
} // namespace mesh
using meshMeshParamCloth_Graphical = mesh::MeshParamCloth_Graphical;
} // namespace RED4ext

// clang-format on
