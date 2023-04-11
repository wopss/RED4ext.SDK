#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/PhxClothChunkData.hpp>

namespace RED4ext
{
namespace physics::cloth { struct ClothCapsuleExportData; }

namespace mesh
{
struct MeshParamCloth : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamCloth";
    static constexpr const char* ALIAS = NAME;

    DynArray<mesh::PhxClothChunkData> chunks; // 30
    DynArray<DynArray<uint16_t>> lodChunkIndices; // 40
    DynArray<DynArray<uint16_t>> drivers; // 50
    Handle<physics::cloth::ClothCapsuleExportData> capsules; // 60
};
RED4EXT_ASSERT_SIZE(MeshParamCloth, 0x70);
} // namespace mesh
using meshMeshParamCloth = mesh::MeshParamCloth;
} // namespace RED4ext

// clang-format on
