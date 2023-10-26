#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ISkinTargetComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponentLODMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/mesh/CookedClothMeshTopologyData.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent
{
struct __declspec(align(0x10)) SkinnedClothComponent : ent::ISkinTargetComponent
{
    static constexpr const char* NAME = "entSkinnedClothComponent";
    static constexpr const char* ALIAS = NAME;

    RaRef<CMesh> graphicsMesh; // 1E0
    RaRef<CMesh> physicalMesh; // 1E8
    ent::MeshComponentLODMode LODMode; // 1F0
    uint8_t unk1F1[0x1F8 - 0x1F1]; // 1F1
    CName meshAppearance; // 1F8
    uint64_t chunkMask; // 200
    uint8_t unk208[0x218 - 0x208]; // 208
    mesh::CookedClothMeshTopologyData compiledTopologyData; // 218
    uint8_t unk2B8[0x2D0 - 0x2B8]; // 2B8
};
RED4EXT_ASSERT_SIZE(SkinnedClothComponent, 0x2D0);
} // namespace ent
using entSkinnedClothComponent = ent::SkinnedClothComponent;
} // namespace RED4ext

// clang-format on
