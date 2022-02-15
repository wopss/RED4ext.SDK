#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/NodeTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyMeshDependencyMode.hpp>

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
    bool shouldSkipStreamingInEditor; // 112
    bool isDiscarded; // 113
    bool isSnapSource; // 114
    bool isSnapTarget; // 115
    uint8_t unk116[0x119 - 0x116]; // 116
    bool excludeOnConsole; // 119
    world::ProxyMeshDependencyMode proxyMeshDependency; // 11A
    uint8_t unk11B[0x11C - 0x11B]; // 11B
    float maxStreamingDistance; // 11C
};
RED4EXT_ASSERT_SIZE(NodeEditorData, 0x120);
} // namespace world
} // namespace RED4ext
