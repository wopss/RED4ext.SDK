#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>
#include <RED4ext/Types/generated/world/Node.hpp>
#include <RED4ext/Types/generated/world/PrefabProxyMeshOnly.hpp>

namespace RED4ext
{
namespace world { struct Prefab; }
namespace world { struct PrefabInstanceData; }
namespace world { struct PrefabVariantsList; }

namespace world { 
struct PrefabNode : world::Node
{
    static constexpr const char* NAME = "worldPrefabNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x40 - 0x38]; // 38
    RaRef<world::Prefab> prefab; // 40
    Handle<world::PrefabInstanceData> instanceData; // 48
    Handle<world::PrefabVariantsList> enabledVariants; // 58
    world::PrefabProxyMeshOnly proxyMeshOnly; // 68
    bool proxyScaleOverride; // 69
    uint8_t unk6A[0x6C - 0x6A]; // 6A
    Vector3 proxyScale; // 6C
    bool canBeToggledInGame; // 78
    uint8_t unk79[0x7A - 0x79]; // 79
    bool noCollision; // 7A
    bool ignoreMeshEmbeddedOccluders; // 7B
    bool ignoreAllOccluders; // 7C
    uint8_t occluderAutoHideDistanceScale; // 7D
    bool enableRenderSceneLayerOverride; // 7E
    RenderSceneLayerMask renderSceneLayerMask; // 7F
};
RED4EXT_ASSERT_SIZE(PrefabNode, 0x80);
} // namespace world
} // namespace RED4ext
