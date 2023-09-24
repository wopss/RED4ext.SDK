#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/shadows/ShadowCastingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/vis/WorldOccluderType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CMesh;

namespace world
{
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
    shadows::ShadowCastingMode castShadows; // 53
    shadows::ShadowCastingMode castLocalShadows; // 54
    shadows::ShadowCastingMode castRayTracedGlobalShadows; // 55
    shadows::ShadowCastingMode castRayTracedLocalShadows; // 56
    bool windImpulseEnabled; // 57
    bool removeFromRainMap; // 58
    uint8_t version; // 59
    uint8_t unk5A[0x60 - 0x5A]; // 5A
};
RED4EXT_ASSERT_SIZE(MeshNode, 0x60);
} // namespace world
using worldMeshNode = world::MeshNode;
} // namespace RED4ext

// clang-format on
