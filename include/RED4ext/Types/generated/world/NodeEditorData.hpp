#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Transform.hpp>
#include <RED4ext/Types/generated/world/NodeTransform.hpp>
#include <RED4ext/Types/generated/world/ProxyMeshDependencyMode.hpp>

namespace RED4ext
{
namespace world { 
struct NodeEditorData : ISerializable
{
    static constexpr const char* NAME = "worldNodeEditorData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
    uint64_t id; // 40
    CName name; // 48
    uint8_t unk50[0x58 - 0x50]; // 50
    CString globalName; // 58
    CString alternativeGlobalName; // 78
    bool isGlobalNameLocked; // 98
    bool isAlternativeGlobalNameLocked; // 99
    uint8_t unk9A[0xA0 - 0x9A]; // 9A
    world::NodeTransform transform; // A0
    Transform pivotTransform; // D0
    uint8_t unkF0[0x100 - 0xF0]; // F0
    uint32_t variantId; // 100
    uint8_t unk104[0x108 - 0x104]; // 104
    uint64_t questPrefabRefHash; // 108
    bool isInterior; // 110
    bool isDestructibleNode; // 111
    bool isDiscarded; // 112
    bool isSnapSource; // 113
    bool isSnapTarget; // 114
    uint8_t unk115[0x118 - 0x115]; // 115
    bool excludeOnConsole; // 118
    world::ProxyMeshDependencyMode proxyMeshDependency; // 119
    uint8_t unk11A[0x11C - 0x11A]; // 11A
    float maxStreamingDistance; // 11C
};
RED4EXT_ASSERT_SIZE(NodeEditorData, 0x120);
} // namespace world
} // namespace RED4ext
