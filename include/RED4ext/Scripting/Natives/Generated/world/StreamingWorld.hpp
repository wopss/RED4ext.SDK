#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct CResource;
namespace world { struct AutoFoliageMapping; }
namespace world { struct EnvironmentDefinition; }
namespace world { struct StreamingBlock; }
namespace world { struct StreamingQueryDataResource; }

namespace world
{
struct __declspec(align(0x10)) StreamingWorld : CResource
{
    static constexpr const char* NAME = "worldStreamingWorld";
    static constexpr const char* ALIAS = NAME;

    uint32_t version; // 40
    uint8_t unk44[0x50 - 0x44]; // 44
    Box worldBoundingBox; // 50
    DynArray<Ref<world::StreamingBlock>> blockRefs; // 70
    uint8_t unk80[0x90 - 0x80]; // 80
    Ref<world::EnvironmentDefinition> environmentDefinition; // 90
    Ref<CResource> persistentStateData; // A8
    Ref<CResource> deviceResource; // C0
    Ref<CResource> deviceInitResource; // D8
    Ref<CResource> mappinResource; // F0
    Ref<CResource> poiMappinResource; // 108
    Ref<CResource> areaResource; // 120
    Ref<CResource> lootResource; // 138
    Ref<CResource> locationResource; // 150
    Ref<CResource> geometryCacheResource; // 168
    RaRef<CResource> locomotionPathResource; // 180
    RaRef<world::AutoFoliageMapping> autoFoliageMapping; // 188
    RaRef<CResource> trafficPersistentResource; // 190
    RaRef<CResource> trafficLaneConnectivityResource; // 198
    RaRef<CResource> trafficLanePolygonsResource; // 1A0
    RaRef<CResource> trafficLaneSpotsResource; // 1A8
    RaRef<CResource> trafficSpatialRepresentationResource; // 1B0
    RaRef<CResource> trafficCollisionResource; // 1B8
    RaRef<CResource> trafficNullAreaCollisionResource; // 1C0
    RaRef<CResource> smartObjectCompiledRootResource; // 1C8
    RaRef<world::StreamingQueryDataResource> streamingQueryDataResource; // 1D0
    uint8_t unk1D8[0x208 - 0x1D8]; // 1D8
    bool wasBuiltForSceneRecording; // 208
    uint8_t unk209[0x210 - 0x209]; // 209
};
RED4EXT_ASSERT_SIZE(StreamingWorld, 0x210);
} // namespace world
using worldStreamingWorld = world::StreamingWorld;
} // namespace RED4ext

// clang-format on
