#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/RoadMaterialInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficConnectivityInLane.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficConnectivityOutLane.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLaneCrowdCreationInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLanePlayerGPSInfo.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficLanePersistent
{
    static constexpr const char* NAME = "worldTrafficLanePersistent";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::TrafficConnectivityOutLane> outLanes; // 00
    DynArray<world::TrafficConnectivityInLane> inLanes; // 10
    DynArray<Vector3> outline; // 20
    DynArray<float> accumulatedLengths; // 30
    DynArray<world::RoadMaterialInfo> roadMaterials; // 40
    DynArray<Vector2> polygon; // 50
    world::TrafficLaneCrowdCreationInfo crowdCreationInfo; // 60
    uint64_t nodeRefHash; // 70
    float length; // 78
    float width; // 7C
    float area; // 80
    world::TrafficLanePlayerGPSInfo playerGPSInfo; // 84
    uint16_t flags; // 88
    uint16_t neighborGroupIndex; // 8A
    uint16_t laneNumber; // 8C
    uint16_t seqNumber; // 8E
    bool isReversed; // 90
    uint8_t maxSpeed; // 91
    uint8_t unk92[0x96 - 0x92]; // 92
    uint16_t subGraphId; // 96
    uint8_t unk98[0x9C - 0x98]; // 98
    float deadEndStart; // 9C
};
RED4EXT_ASSERT_SIZE(TrafficLanePersistent, 0xA0);
} // namespace world
using worldTrafficLanePersistent = world::TrafficLanePersistent;
} // namespace RED4ext

// clang-format on
