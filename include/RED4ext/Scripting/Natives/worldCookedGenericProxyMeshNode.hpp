#pragma once

#include <RED4ext/Scripting/Natives/Generated/world/CookedPrefabProxyMeshNode.hpp>

namespace RED4ext
{
namespace world
{
#pragma pack(push, 1)
struct CookedGenericProxyMeshInnerNode : CookedMeshInnerNode
{
    uint32_t nbNodesUnderProxy; // 21
    float nearAutoHideDistance; // 25
};
RED4EXT_ASSERT_SIZE(CookedGenericProxyMeshInnerNode, 0x29);
#pragma pack(pop)

struct CookedGenericProxyMeshNode : CookedPrefabProxyMeshNode
{
    static constexpr const char* NAME = "worldCookedGenericProxyMeshNode";
    static constexpr const char* ALIAS = NAME;

    BufferView<CookedGenericProxyMeshInnerNode> GetInnerNodes()
    {
        return {cookedData.Data(), cookedData.Size(), cookedElementSize};
    }
};
RED4EXT_ASSERT_SIZE(CookedGenericProxyMeshNode, 0x58);
} // namespace world
using worldCookedGenericProxyMeshNode = world::CookedGenericProxyMeshNode;
using worldCookedGenericProxyMeshInnerNode = world::CookedGenericProxyMeshInnerNode;
} // namespace RED4ext
