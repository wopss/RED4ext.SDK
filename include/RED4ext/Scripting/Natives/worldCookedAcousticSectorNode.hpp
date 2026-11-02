#pragma once

#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AcousticDataResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedNode.hpp>
#include <RED4ext/Views/BufferView.hpp>

namespace RED4ext
{
namespace world
{
#pragma pack(push, 1)
struct CookedAcousticSectorInnerNode
{
    RaRef<AcousticDataResource> data; // 00
    uint32_t inSectorCoordsX;         // 08
    uint32_t inSectorCoordsY;         // 0C
    uint32_t inSectorCoordsZ;         // 10
    uint8_t edgeMask;                 // 14
};
RED4EXT_ASSERT_SIZE(CookedAcousticSectorInnerNode, 0x15);
#pragma pack(pop)

struct CookedAcousticSectorNode : CookedNode
{
    static constexpr const char* NAME = "worldCookedAcousticSectorNode";
    static constexpr const char* ALIAS = NAME;

    BufferView<CookedAcousticSectorInnerNode> GetInnerNodes()
    {
        return {cookedData.Data(), cookedData.Size(), cookedElementSize};
    }

    uint8_t unk38[0x40 - 0x38];   // 38
    DynArray<uint8_t> cookedData; // 40
    uint32_t cookedElementSize;   // 50
    uint8_t unk54[0x58 - 0x54];   // 54
    uint32_t generatorId;         // 58
};
RED4EXT_ASSERT_SIZE(CookedAcousticSectorNode, 0x60);
RED4EXT_ASSERT_OFFSET(CookedAcousticSectorNode, cookedData, 0x40);
} // namespace world
using worldCookedAcousticSectorNode = world::CookedAcousticSectorNode;
using worldCookedAcousticSectorInnerNode = world::CookedAcousticSectorInnerNode;
} // namespace RED4ext
