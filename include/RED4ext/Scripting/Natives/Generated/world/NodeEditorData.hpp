#pragma once

// clang-format off

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
namespace world
{
struct __declspec(align(0x10)) NodeEditorData : ISerializable
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
    CString initialGlobalNameHash; // A0
    world::NodeTransform transform; // C0
    Transform pivotTransform; // F0
    uint8_t unk110[0x120 - 0x110]; // 110
    uint32_t variantId; // 120
    uint8_t unk124[0x128 - 0x124]; // 124
    uint64_t questPrefabRefHash; // 128
    bool isInterior; // 130
    bool isDestructibleNode; // 131
    bool shouldSkipStreamingInEditor; // 132
    bool isDiscarded; // 133
    bool isSnapSource; // 134
    bool isSnapTarget; // 135
    uint8_t unk136[0x139 - 0x136]; // 136
    bool excludeOnConsole; // 139
    bool excludeOnNextGenConsoles; // 13A
    world::ProxyMeshDependencyMode proxyMeshDependency; // 13B
    float maxStreamingDistance; // 13C
};
RED4EXT_ASSERT_SIZE(NodeEditorData, 0x140);
} // namespace world
using worldNodeEditorData = world::NodeEditorData;
} // namespace RED4ext

// clang-format on
