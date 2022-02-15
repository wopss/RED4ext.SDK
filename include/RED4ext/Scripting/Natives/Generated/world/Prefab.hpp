#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabInteriorMapContribution.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabMinimapContribution.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabOwnership.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabStreamingImportance.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabStreamingOcclusion.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabType.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxyMeshBuildParams.hpp>

namespace RED4ext
{
struct CMesh;
struct Multilayer_Setup;
namespace world { struct AutoFoliageMapping; }
namespace world { struct EnvironmentDefinition; }
namespace world { struct NodesGroup; }
namespace world { struct Prefab; }
namespace world { struct PrefabMetadata; }
namespace world { struct PrefabVariantsList; }

namespace world { 
struct Prefab : res::StreamedResource
{
    static constexpr const char* NAME = "worldPrefab";
    static constexpr const char* ALIAS = NAME;

    RaRef<world::EnvironmentDefinition> environmentDefinition; // 40
    RaRef<Multilayer_Setup> terrainMultilayerSetup; // 48
    RaRef<world::AutoFoliageMapping> foliageBrushToTerrainLayerMapping; // 50
    RaRef<CMesh> proxyMesh; // 58
    Vector3 proxyScale; // 60
    float proxyDistanceFactor; // 6C
    float averageNodeDiagonal; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
    RaRef<world::Prefab> booleanProxyHelper; // 78
    RaRef<world::Prefab> proxyLimiterHelper; // 80
    RaRef<CMesh> customProxyMeshHelper; // 88
    Handle<world::PrefabVariantsList> defaultVariants; // 90
    Handle<world::NodesGroup> mainGroup; // A0
    uint8_t unkB0[0xE0 - 0xB0]; // B0
    world::ProxyMeshBuildParams proxyMeshBuildParams; // E0
    world::PrefabOwnership teamOwnership; // 1C8
    world::PrefabStreamingOcclusion streamingOcclusion; // 1C9
    world::PrefabStreamingImportance streamingImportance; // 1CA
    world::PrefabType type; // 1CB
    bool isLocked; // 1CC
    uint8_t unk1CD[0x1D0 - 0x1CD]; // 1CD
    Box maxBounds; // 1D0
    bool isMerged; // 1F0
    bool isProxyMeshOnly; // 1F1
    bool boostInnerNodesToProxyDistance; // 1F2
    uint8_t unk1F3[0x1F4 - 0x1F3]; // 1F3
    bool ignoreMeshEmbeddedOccluders; // 1F4
    bool ignoreAllOccluders; // 1F5
    bool isTerrainPrefab; // 1F6
    bool excludeOnConsole; // 1F7
    world::PrefabMinimapContribution minimapContribution; // 1F8
    world::PrefabInteriorMapContribution interiorMapContribution; // 1F9
    uint8_t unk1FA[0x210 - 0x1FA]; // 1FA
    CRUID prefabUniqueId; // 210
    uint8_t unk218[0x2B0 - 0x218]; // 218
    DynArray<Handle<world::PrefabMetadata>> metadataArray; // 2B0
};
RED4EXT_ASSERT_SIZE(Prefab, 0x2C0);
} // namespace world
} // namespace RED4ext
