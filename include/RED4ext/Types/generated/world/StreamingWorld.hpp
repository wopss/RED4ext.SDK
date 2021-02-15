#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Box.hpp>
#include <RED4ext/Types/generated/CResource.hpp>
#include <RED4ext/Types/generated/world/StreamingSectorDescriptor.hpp>

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
    Ref<world::EnvironmentDefinition> environmentDefinition; // B0
    Ref<CResource> persistentStateData; // C8
    Ref<CResource> deviceResource; // E0
    Ref<CResource> deviceInitResource; // F8
    Ref<CResource> mappinResource; // 110
    Ref<CResource> poiMappinResource; // 128
    Ref<CResource> areaResource; // 140
    Ref<CResource> lootResource; // 158
    Ref<CResource> locationResource; // 170
    Ref<CResource> geometryCacheResource; // 188
    RaRef<CResource> locomotionPathResource; // 1A0
    RaRef<world::AutoFoliageMapping> autoFoliageMapping; // 1A8
    RaRef<CResource> trafficPersistentResource; // 1B0
    RaRef<CResource> trafficLaneConnectivityResource; // 1B8
    RaRef<CResource> trafficLanePolygonsResource; // 1C0
    RaRef<CResource> trafficLaneSpotsResource; // 1C8
    RaRef<CResource> trafficSpatialRepresentationResource; // 1D0
    RaRef<CResource> trafficCollisionResource; // 1D8
    RaRef<CResource> trafficNullAreaCollisionResource; // 1E0
    RaRef<CResource> smartObjectCompiledRootResource; // 1E8
    RaRef<world::StreamingQueryDataResource> streamingQueryDataResource; // 1F0
    uint8_t unk1F8[0x228 - 0x1F8]; // 1F8
    bool wasBuiltForSceneRecording; // 228
    uint8_t unk229[0x230 - 0x229]; // 229
};
RED4EXT_ASSERT_SIZE(StreamingWorld, 0x230);
} // namespace world
} // namespace RED4ext
