#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/MeshParameter.hpp>

namespace RED4ext
{
namespace physics { struct DeferredCollection; }

namespace mesh
{
struct MeshParamCompiledPhysics : mesh::MeshParameter
{
    static constexpr const char* NAME = "meshMeshParamCompiledPhysics";
    static constexpr const char* ALIAS = NAME;

    Handle<physics::DeferredCollection> collection; // 30
};
RED4EXT_ASSERT_SIZE(MeshParamCompiledPhysics, 0x40);
} // namespace mesh
using meshMeshParamCompiledPhysics = mesh::MeshParamCompiledPhysics;
} // namespace RED4ext

// clang-format on
