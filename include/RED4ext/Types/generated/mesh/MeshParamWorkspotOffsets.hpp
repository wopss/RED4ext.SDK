#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/Matrix.hpp>
#include <RED4ext/Types/generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace mesh { 
struct MeshParamWorkspotOffsets : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamWorkspotOffsets";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> names; // 30
    DynArray<Matrix> offsets; // 40
};
RED4EXT_ASSERT_SIZE(MeshParamWorkspotOffsets, 0x50);
} // namespace mesh
} // namespace RED4ext
