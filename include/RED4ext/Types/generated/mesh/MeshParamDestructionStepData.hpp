#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/mesh/MeshParameter.hpp>
#include <RED4ext/Types/generated/physics/DestructionHierarchyOffset.hpp>

namespace RED4ext
{
namespace mesh { 
struct MeshParamDestructionStepData : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamDestructionStepData";
    static constexpr const char* ALIAS = NAME;

    DynArray<physics::DestructionHierarchyOffset> offsets; // 30
    CString isInstantRemovable; // 40
};
RED4EXT_ASSERT_SIZE(MeshParamDestructionStepData, 0x60);
} // namespace mesh
} // namespace RED4ext
