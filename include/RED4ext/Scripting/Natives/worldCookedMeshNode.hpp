#pragma once

#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/shadows/ShadowCastingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/vis/WorldOccluderType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedNode.hpp>
#include <RED4ext/Views/BufferView.hpp>

namespace RED4ext
{
struct CMesh;

namespace world
{
#pragma pack(push, 1)
struct CookedMeshInnerNode
{
    RaRef<CMesh> mesh;                                     // 00
    CName meshAppearance;                                  // 08
    float forceAutoHideDistance;                           // 10
    uint32_t lodLevelScales;                               // 14
    visWorldOccluderType occluderType;                     // 18
    uint8_t occluderAutohideDistanceScale;                 // 19
    RenderSceneLayerMask renderSceneLayerMask;             // 1A
    shadows::ShadowCastingMode castShadows;                // 1B
    shadows::ShadowCastingMode castLocalShadows;           // 1C
    shadows::ShadowCastingMode castRayTracedGlobalShadows; // 1D
    shadows::ShadowCastingMode castRayTracedLocalShadows;  // 1E
    bool windImpulseEnabled;                               // 1F
    bool removeFromRainMap;                                // 20
};
RED4EXT_ASSERT_SIZE(CookedMeshInnerNode, 0x21);
#pragma pack(pop)

struct CookedMeshNode : CookedNode
{
    static constexpr const char* NAME = "worldCookedMeshNode";
    static constexpr const char* ALIAS = NAME;

    BufferView<CookedMeshInnerNode> GetInnerNodes()
    {
        return {cookedData.Data(), cookedData.Size(), cookedElementSize};
    }

    uint8_t unk38[0x40 - 0x38];   // 38
    DynArray<uint8_t> cookedData; // 40
    uint32_t cookedElementSize;   // 50
    uint8_t unk54[0x58 - 0x54];   // 54
};
RED4EXT_ASSERT_SIZE(CookedMeshNode, 0x58);
RED4EXT_ASSERT_OFFSET(CookedMeshNode, cookedData, 0x40);
} // namespace world
using worldCookedMeshNode = world::CookedMeshNode;
using worldCookedMeshInnerNode = world::CookedMeshInnerNode;
} // namespace RED4ext
