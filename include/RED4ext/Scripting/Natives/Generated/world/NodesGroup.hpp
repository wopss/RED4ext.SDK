#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/NodeGroupType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyMeshGroupBuildParams.hpp>

namespace RED4ext
{
struct CMesh;
namespace world { struct Node; }
namespace world { struct PrefabMetadata; }

namespace world
{
struct __declspec(align(0x10)) NodesGroup : ISerializable
{
    static constexpr const char* NAME = "worldNodesGroup";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
    uint64_t id; // 38
    CRUID groupUniqueId; // 40
    world::NodeGroupType type; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    Transform transform; // 50
    bool transformCalculated; // 70
    uint8_t unk71[0x80 - 0x71]; // 71
    Transform customPivotOffset; // 80
    bool keepPosition; // A0
    uint8_t unkA1[0xA8 - 0xA1]; // A1
    DynArray<Handle<world::Node>> nodes; // A8
    DynArray<Handle<world::NodesGroup>> subGroups; // B8
    uint8_t unkC8[0x138 - 0xC8]; // C8
    world::ProxyMeshGroupBuildParams proxyMeshGroupBuildParams; // 138
    RaRef<CMesh> proxyMesh; // 228
    uint8_t unk230[0x23C - 0x230]; // 230
    float proxyDistanceFactor; // 23C
    DynArray<Handle<world::PrefabMetadata>> metadataArray; // 240
};
RED4EXT_ASSERT_SIZE(NodesGroup, 0x250);
} // namespace world
using worldNodesGroup = world::NodesGroup;
} // namespace RED4ext

// clang-format on
