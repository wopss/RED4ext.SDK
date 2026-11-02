#pragma once

#include <RED4ext/Scripting/Natives/Generated/world/CookedBendedMeshNode.hpp>

namespace RED4ext
{
namespace world
{
#pragma pack(push, 1)
struct CookedCableMeshInnerNode : CookedBendedMeshInnerNode
{
    NodeRef destructionHashes[2]; // 1E
};
RED4EXT_ASSERT_SIZE(CookedCableMeshInnerNode, 0x2E);
#pragma pack(pop)

struct CookedCableMeshNode : CookedBendedMeshNode
{
    static constexpr const char* NAME = "worldCookedCableMeshNode";
    static constexpr const char* ALIAS = NAME;

    BufferView<CookedCableMeshInnerNode> GetInnerNodes()
    {
        return {cookedData.Data(), cookedData.Size(), cookedElementSize};
    }
};
RED4EXT_ASSERT_SIZE(CookedCableMeshNode, 0x78);
} // namespace world
using worldCookedCableMeshNode = world::CookedCableMeshNode;
using worldCookedCableMeshInnerNode = world::CookedCableMeshInnerNode;
} // namespace RED4ext
