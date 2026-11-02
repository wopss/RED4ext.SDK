#pragma once

#include <RED4ext/Scripting/Natives/Generated/world/CookedCollisionNode.hpp>

namespace RED4ext
{
namespace world
{
#pragma pack(push, 1)
struct CookedFoliageDestructionInnerNode : CookedCollisionInnerNode
{
    uint8_t unk30[0x40 - 0x30];   // 30
    uint64_t foliageResourceHash; // 40
    uint32_t populationIndex;     // 48
    uint32_t populationCount;     // 4C
};
RED4EXT_ASSERT_SIZE(CookedFoliageDestructionInnerNode, 0x50);
#pragma pack(pop)

struct CookedFoliageDestructionNode : CookedCollisionNode
{
    static constexpr const char* NAME = "worldCookedFoliageDestructionNode";
    static constexpr const char* ALIAS = NAME;

    BufferView<CookedFoliageDestructionInnerNode> GetInnerNodes()
    {
        return {cookedData.Data(), cookedData.Size(), cookedElementSize};
    }

    DynArray<uint32_t> populationIndices; // 80
    uint32_t dataVersion;                 // 90
};
RED4EXT_ASSERT_SIZE(CookedFoliageDestructionNode, 0x98);
RED4EXT_ASSERT_OFFSET(CookedFoliageDestructionNode, populationIndices, 0x80);
RED4EXT_ASSERT_OFFSET(CookedFoliageDestructionNode, dataVersion, 0x90);
} // namespace world
using worldCookedFoliageDestructionNode = world::CookedFoliageDestructionNode;
using worldCookedFoliageDestructionInnerNode = world::CookedFoliageDestructionInnerNode;
} // namespace RED4ext
