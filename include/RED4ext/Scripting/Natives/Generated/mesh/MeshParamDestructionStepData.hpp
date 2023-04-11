#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/DestructionHierarchyOffset.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParamDestructionStepData : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamDestructionStepData";
    static constexpr const char* ALIAS = NAME;

    DynArray<physics::DestructionHierarchyOffset> offsets; // 30
    CString isInstantRemovable; // 40
};
RED4EXT_ASSERT_SIZE(MeshParamDestructionStepData, 0x60);
} // namespace mesh
using meshMeshParamDestructionStepData = mesh::MeshParamDestructionStepData;
} // namespace RED4ext

// clang-format on
