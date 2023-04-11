#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParamWorkspotOffsets : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamWorkspotOffsets";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> names; // 30
    DynArray<Matrix> offsets; // 40
};
RED4EXT_ASSERT_SIZE(MeshParamWorkspotOffsets, 0x50);
} // namespace mesh
using meshMeshParamWorkspotOffsets = mesh::MeshParamWorkspotOffsets;
} // namespace RED4ext

// clang-format on
