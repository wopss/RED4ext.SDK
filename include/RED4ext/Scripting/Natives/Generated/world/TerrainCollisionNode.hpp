#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) TerrainCollisionNode : world::Node
{
    static constexpr const char* NAME = "worldTerrainCollisionNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> materials; // 38
    DynArray<uint8_t> materialIndices; // 48
    DeferredDataBuffer heightfieldGeometry; // 58
    WorldTransform actorTransform; // B0
    Vector4 extents; // D0
    float streamingDistance; // E0
    float rowScale; // E4
    float columnScale; // E8
    float heightScale; // EC
    bool increaseStreamingDistance; // F0
    uint8_t unkF1[0x100 - 0xF1]; // F1
};
RED4EXT_ASSERT_SIZE(TerrainCollisionNode, 0x100);
} // namespace world
using worldTerrainCollisionNode = world::TerrainCollisionNode;
} // namespace RED4ext

// clang-format on
