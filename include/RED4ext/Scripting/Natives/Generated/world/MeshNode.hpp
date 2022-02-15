#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/vis/WorldOccluderType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CMesh;

namespace world { 
struct MeshNode : world::Node
{
    static constexpr const char* NAME = "worldMeshNode";
    static constexpr const char* ALIAS = NAME;

    RaRef<CMesh> mesh; // 38
    CName meshAppearance; // 40
    float forceAutoHideDistance; // 48
    uint32_t lodLevelScales; // 4C
    vis::WorldOccluderType occluderType; // 50
    uint8_t occluderAutohideDistanceScale; // 51
    RenderSceneLayerMask renderSceneLayerMask; // 52
    bool castShadows; // 53
    bool castLocalShadows; // 54
    bool castRayTracedLocalShadows; // 55
    bool windImpulseEnabled; // 56
    bool removeFromRainMap; // 57
};
RED4EXT_ASSERT_SIZE(MeshNode, 0x58);
} // namespace world
} // namespace RED4ext
