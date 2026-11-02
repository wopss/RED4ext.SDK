#pragma once

#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/Generated/shadows/ShadowCastingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedNode.hpp>
#include <RED4ext/Views/BufferView.hpp>

namespace RED4ext
{
struct CMesh;

namespace world
{
#pragma pack(push, 1)
struct CookedBendedMeshInnerNode
{
    RaRef<CMesh> mesh;                           // 00
    CName meshAppearance;                        // 08
    uint32_t deformationDataStartIndex;          // 10
    uint32_t deformationDataCount;               // 14
    uint16_t deformedBoxIndex;                   // 18
    shadows::ShadowCastingMode castShadows;      // 1A
    shadows::ShadowCastingMode castLocalShadows; // 1B
    bool removeFromRainMap;                      // 1C
    bool isBendedRoad;                           // 1D
};
RED4EXT_ASSERT_SIZE(CookedBendedMeshInnerNode, 0x1E);
#pragma pack(pop)

struct CookedBendedMeshNode : CookedNode
{
    static constexpr const char* NAME = "worldCookedBendedMeshNode";
    static constexpr const char* ALIAS = NAME;

    BufferView<CookedBendedMeshInnerNode> GetInnerNodes()
    {
        return {cookedData.Data(), cookedData.Size(), cookedElementSize};
    }

    uint8_t unk38[0x40 - 0x38];       // 38
    DynArray<uint8_t> cookedData;     // 40
    uint32_t cookedElementSize;       // 50
    uint8_t unk54[0x58 - 0x54];       // 54
    DynArray<Matrix> deformationData; // 58
    DynArray<Box> deformedBoxes;      // 68
};
RED4EXT_ASSERT_SIZE(CookedBendedMeshNode, 0x78);
RED4EXT_ASSERT_OFFSET(CookedBendedMeshNode, cookedData, 0x40);
RED4EXT_ASSERT_OFFSET(CookedBendedMeshNode, deformationData, 0x58);
RED4EXT_ASSERT_OFFSET(CookedBendedMeshNode, deformedBoxes, 0x68);
} // namespace world
using worldCookedBendedMeshNode = world::CookedBendedMeshNode;
using worldCookedBendedMeshInnerNode = world::CookedBendedMeshInnerNode;
} // namespace RED4ext
