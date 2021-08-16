#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingSectorDescriptor.hpp>

namespace RED4ext
{
struct CResource;
namespace world { struct AutoFoliageMapping; }
namespace world { struct EnvironmentDefinition; }
namespace world { struct StreamingQueryDataResource; }

namespace world { 
struct StreamingWorld : CResource
{
    static constexpr const char* NAME = "worldStreamingWorld";
    static constexpr const char* ALIAS = NAME;

    uint32_t version; // 40
    uint8_t unk44[0x50 - 0x44]; // 44
    Box worldBoundingBox; // 50
    DynArray<world::StreamingSectorDescriptor> exteriorSectors; // 70
    DynArray<world::StreamingSectorDescriptor> interiorSectors; // 80
    DynArray<world::StreamingSectorDescriptor> questSectors; // 90
    DynArray<world::StreamingSectorDescriptor> alwaysLoadedSectors; // A0
    DynArray<world::StreamingSectorDescriptor> navigationSectors; // B0
    Ref<world::EnvironmentDefinition> environmentDefinition; // C0
    Ref<CResource> persistentStateData; // D8
    Ref<CResource> deviceResource; // F0
    Ref<CResource> deviceInitResource; // 108
    Ref<CResource> mappinResource; // 120
    Ref<CResource> poiMappinResource; // 138
    Ref<CResource> areaResource; // 150
    Ref<CResource> lootResource; // 168
    Ref<CResource> locationResource; // 180
    Ref<CResource> geometryCacheResource; // 198
    RaRef<CResource> locomotionPathResource; // 1B0
    RaRef<world::AutoFoliageMapping> autoFoliageMapping; // 1B8
    RaRef<CResource> trafficPersistentResource; // 1C0
    RaRef<CResource> trafficLaneConnectivityResource; // 1C8
    RaRef<CResource> trafficLanePolygonsResource; // 1D0
    RaRef<CResource> trafficLaneSpotsResource; // 1D8
    RaRef<CResource> trafficSpatialRepresentationResource; // 1E0
    RaRef<CResource> trafficCollisionResource; // 1E8
    RaRef<CResource> trafficNullAreaCollisionResource; // 1F0
    RaRef<CResource> smartObjectCompiledRootResource; // 1F8
    RaRef<world::StreamingQueryDataResource> streamingQueryDataResource; // 200
    uint8_t unk208[0x238 - 0x208]; // 208
    bool wasBuiltForSceneRecording; // 238
    uint8_t unk239[0x240 - 0x239]; // 239
};
RED4EXT_ASSERT_SIZE(StreamingWorld, 0x240);
} // namespace world
} // namespace RED4ext
