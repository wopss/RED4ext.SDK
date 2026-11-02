#pragma once

#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/shadows/ShadowCastingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/vis/WorldOccluderType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CookedNode.hpp>

namespace RED4ext
{
struct CMesh;

namespace world
{
struct InstancedMeshInnerNode
{
    Box groupWorldBoundingBox;                   // 00
    RaRef<CMesh> mesh;                           // 20
    CName meshAppearance;                        // 28
    float forceAutoHideDistance;                 // 30
    uint32_t lodLevelScales;                     // 34
    shadows::ShadowCastingMode castShadows;      // 38
    shadows::ShadowCastingMode castLocalShadows; // 39
    RenderSceneLayerMask renderSceneLayerMask;   // 3A
    visWorldOccluderType occluderType;           // 3B
    uint8_t occluderAutoHideDistanceScale;       // 3C
    bool removeFromRainMap;                      // 3D
    uint8_t unk3E[0x40 - 0x3E];                  // 3E
};
RED4EXT_ASSERT_SIZE(InstancedMeshInnerNode, 0x40);

struct InstancedMeshNodeTranformRange
{
    uint16_t transformStartIndex; // 00
    uint16_t numTransforms;       // 02
};
RED4EXT_ASSERT_SIZE(InstancedMeshNodeTranformRange, 0x4);

struct InstancedMeshNode : CookedNode
{
    static constexpr const char* NAME = "worldInstancedMeshNode";
    static constexpr const char* ALIAS = NAME;

    TDataBuffer<rend::RenderProxyTransform> cookedWorldTransformsBuffer; // 38
    DynArray<rend::RenderProxyTransform> unk60;                          // 60
    DynArray<InstancedMeshInnerNode> cookedInstances;                    // 70
    DynArray<InstancedMeshNodeTranformRange> transformRanges;            // 80
    uint8_t version;                                                     // 90
    uint8_t unk91[0x98 - 0x91];                                          // 91
};
RED4EXT_ASSERT_SIZE(InstancedMeshNode, 0x98);
RED4EXT_ASSERT_OFFSET(InstancedMeshNode, cookedWorldTransformsBuffer, 0x38);
RED4EXT_ASSERT_OFFSET(InstancedMeshNode, cookedInstances, 0x70);
RED4EXT_ASSERT_OFFSET(InstancedMeshNode, transformRanges, 0x80);
RED4EXT_ASSERT_OFFSET(InstancedMeshNode, version, 0x90);
} // namespace world
using worldInstancedMeshNode = world::InstancedMeshNode;
using worldInstancedMeshInnerNode = world::InstancedMeshInnerNode;
using worldInstancedMeshNodeTranformRange = world::InstancedMeshNodeTranformRange;
} // namespace RED4ext
