#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/RegionData.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParamBakedDestructionData : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamBakedDestructionData";
    static constexpr const char* ALIAS = NAME;

    DynArray<mesh::RegionData> regionData; // 30
    DynArray<DataBuffer> indices; // 40
};
RED4EXT_ASSERT_SIZE(MeshParamBakedDestructionData, 0x50);
} // namespace mesh
using meshMeshParamBakedDestructionData = mesh::MeshParamBakedDestructionData;
} // namespace RED4ext

// clang-format on
