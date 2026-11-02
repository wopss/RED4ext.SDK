#pragma once

#include <RED4ext/Buffer.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/ShapeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CollisionNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedNode.hpp>
#include <RED4ext/Views/BufferView.hpp>

namespace RED4ext
{
namespace world
{
struct CookedCollisionInnerNode
{
    Vector4 extents;             // 00
    uint64_t sectorHash;         // 10
    uint32_t dataOffset;         // 18
    uint16_t numActors;          // 1C
    uint16_t numShapeInfos;      // 1E
    uint16_t numShapePositions;  // 20
    uint16_t numShapeRotations;  // 22
    uint16_t numScales;          // 24
    uint16_t numMaterials;       // 26
    uint16_t numPresets;         // 28
    uint16_t numShapeIndices;    // 2A
    uint16_t numMaterialIndices; // 2C
    uint8_t lod;                 // 2E
    uint8_t unk2F;               // 2F
};
RED4EXT_ASSERT_SIZE(CookedCollisionInnerNode, 0x30);

struct CookedCollisionNode : CookedNode
{
    static constexpr const char* NAME = "worldCookedCollisionNode";
    static constexpr const char* ALIAS = NAME;

    BufferView<CookedCollisionInnerNode> GetInnerNodes()
    {
        return {cookedData.Data(), cookedData.Size(), cookedElementSize};
    }

    CollisionDataView GetCollisionDataView(uint32_t aInnerNodeIndex)
    {
        auto& node = GetInnerNodes().At(aInnerNodeIndex);
        return {compiledData,           node.dataOffset,        node.numActors,         node.numShapeInfos,
                node.numShapePositions, node.numShapeRotations, node.numScales,         node.numMaterials,
                node.numPresets,        node.numShapeIndices,   node.numMaterialIndices};
    }

    uint8_t unk38[0x40 - 0x38];   // 38
    DynArray<uint8_t> cookedData; // 40
    uint32_t cookedElementSize;   // 50
    uint8_t unk54[0x58 - 0x54];   // 54
    DataBuffer compiledData;      // 58
};
RED4EXT_ASSERT_SIZE(CookedCollisionNode, 0x80);
RED4EXT_ASSERT_OFFSET(CookedCollisionNode, cookedData, 0x40);
RED4EXT_ASSERT_OFFSET(CookedCollisionNode, compiledData, 0x58);
} // namespace world
using worldCookedCollisionNode = world::CookedCollisionNode;
using worldCookedCollisionInnerNode = world::CookedCollisionInnerNode;
} // namespace RED4ext
