#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/DestructionBond.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParamDestructionBonds : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamDestructionBonds";
    static constexpr const char* ALIAS = NAME;

    DynArray<mesh::DestructionBond> bonds; // 30
};
RED4EXT_ASSERT_SIZE(MeshParamDestructionBonds, 0x40);
} // namespace mesh
using meshMeshParamDestructionBonds = mesh::MeshParamDestructionBonds;
} // namespace RED4ext

// clang-format on
