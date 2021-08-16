#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Types/generated/vis/WorldOccluderType.hpp>
#include <RED4ext/Types/generated/world/Node.hpp>

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
    bool windImpulseEnabled; // 55
    bool removeFromRainMap; // 56
    uint8_t unk57[0x58 - 0x57]; // 57
};
RED4EXT_ASSERT_SIZE(MeshNode, 0x58);
} // namespace world
} // namespace RED4ext
