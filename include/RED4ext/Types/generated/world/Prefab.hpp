#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Box.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>
#include <RED4ext/Types/generated/res/StreamedResource.hpp>
#include <RED4ext/Types/generated/world/PrefabMinimapContribution.hpp>
#include <RED4ext/Types/generated/world/PrefabOwnership.hpp>
#include <RED4ext/Types/generated/world/PrefabStreamingOcclusion.hpp>
#include <RED4ext/Types/generated/world/PrefabType.hpp>
#include <RED4ext/Types/generated/world/ProxyMeshBuildParams.hpp>

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
    RaRef<world::Prefab> booleanProxyHelper; // 70
    RaRef<world::Prefab> proxyLimiterHelper; // 78
    RaRef<CMesh> customProxyMeshHelper; // 80
    Handle<world::PrefabVariantsList> defaultVariants; // 88
    Handle<world::NodesGroup> mainGroup; // 98
    uint8_t unkA8[0xD8 - 0xA8]; // A8
    world::ProxyMeshBuildParams proxyMeshBuildParams; // D8
    world::PrefabOwnership teamOwnership; // 1C0
    world::PrefabStreamingOcclusion streamingOcclusion; // 1C1
    world::PrefabType type; // 1C2
    bool isLocked; // 1C3
    uint8_t unk1C4[0x1D0 - 0x1C4]; // 1C4
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
    uint8_t unk1F9[0x210 - 0x1F9]; // 1F9
    CRUID prefabUniqueId; // 210
    uint8_t unk218[0x2B0 - 0x218]; // 218
    DynArray<Handle<world::PrefabMetadata>> metadataArray; // 2B0
};
RED4EXT_ASSERT_SIZE(Prefab, 0x2C0);
} // namespace world
} // namespace RED4ext
