#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace mesh
{
struct ChunkMaterials
{
    static constexpr const char* NAME = "meshChunkMaterials";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> materialNames; // 00
};
RED4EXT_ASSERT_SIZE(ChunkMaterials, 0x10);
} // namespace mesh
using meshChunkMaterials = mesh::ChunkMaterials;
} // namespace RED4ext

// clang-format on
