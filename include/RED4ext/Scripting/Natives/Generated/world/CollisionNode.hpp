#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) CollisionNode : world::Node
{
    static constexpr const char* NAME = "worldCollisionNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x60 - 0x38]; // 38
    DataBuffer compiledData; // 60
    uint64_t sectorHash; // 88
    uint16_t numActors; // 90
    uint16_t numShapeInfos; // 92
    uint16_t numShapePositions; // 94
    uint16_t numShapeRotations; // 96
    uint16_t numScales; // 98
    uint16_t numMaterials; // 9A
    uint16_t numPresets; // 9C
    uint16_t numShapeIndices; // 9E
    uint16_t numMaterialIndices; // A0
    uint8_t lod; // A2
    uint8_t resourceVersion; // A3
    uint8_t unkA4[0xB0 - 0xA4]; // A4
    Vector4 extents; // B0
};
RED4EXT_ASSERT_SIZE(CollisionNode, 0xC0);
} // namespace world
using worldCollisionNode = world::CollisionNode;
} // namespace RED4ext

// clang-format on
