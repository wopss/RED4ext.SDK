#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/LocalMaterialHeader.hpp>

namespace RED4ext
{
namespace mesh { 
struct MeshMaterialBuffer
{
    static constexpr const char* NAME = "meshMeshMaterialBuffer";
    static constexpr const char* ALIAS = NAME;

    DataBuffer rawData; // 00
    DynArray<mesh::LocalMaterialHeader> rawDataHeaders; // 28
    uint8_t unk38[0xA0 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(MeshMaterialBuffer, 0xA0);
} // namespace mesh
} // namespace RED4ext
