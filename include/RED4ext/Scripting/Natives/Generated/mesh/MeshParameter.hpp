#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshParameter : ISerializable
{
    static constexpr const char* NAME = "meshMeshParameter";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MeshParameter, 0x30);
} // namespace mesh
using meshMeshParameter = mesh::MeshParameter;
} // namespace RED4ext

// clang-format on
