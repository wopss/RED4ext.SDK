#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/ImportedSnapTags.hpp>

namespace RED4ext
{
namespace mesh { 
struct MeshImportedSnapPoint : ISerializable
{
    static constexpr const char* NAME = "meshMeshImportedSnapPoint";
    static constexpr const char* ALIAS = NAME;

    Matrix localToCloud; // 30
    float range; // 70
    uint8_t rotationAlignmentSteps; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
    mesh::ImportedSnapTags snapTags; // 78
    uint8_t unk98[0xA0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(MeshImportedSnapPoint, 0xA0);
} // namespace mesh
} // namespace RED4ext
