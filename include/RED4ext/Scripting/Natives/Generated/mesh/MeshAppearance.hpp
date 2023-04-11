#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace mesh
{
struct MeshAppearance : ISerializable
{
    static constexpr const char* NAME = "meshMeshAppearance";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
    DynArray<CName> chunkMaterials; // 38
    uint8_t unk48[0x58 - 0x48]; // 48
    DynArray<CName> tags; // 58
    uint8_t unk68[0xA8 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(MeshAppearance, 0xA8);
} // namespace mesh
using meshMeshAppearance = mesh::MeshAppearance;
} // namespace RED4ext

// clang-format on
