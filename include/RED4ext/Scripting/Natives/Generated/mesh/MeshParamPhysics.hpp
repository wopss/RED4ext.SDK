#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace physics { struct SystemResource; }

namespace mesh
{
struct MeshParamPhysics : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamPhysics";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::SystemResource> physicsData; // 30
};
RED4EXT_ASSERT_SIZE(MeshParamPhysics, 0x40);
} // namespace mesh
using meshMeshParamPhysics = mesh::MeshParamPhysics;
} // namespace RED4ext

// clang-format on
