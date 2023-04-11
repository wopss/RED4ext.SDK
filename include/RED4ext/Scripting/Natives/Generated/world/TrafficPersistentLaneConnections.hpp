#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficConnectivityInLane.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficConnectivityOutLane.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficPersistentLaneConnections
{
    static constexpr const char* NAME = "worldTrafficPersistentLaneConnections";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::TrafficConnectivityOutLane> outlanes; // 00
    DynArray<world::TrafficConnectivityInLane> inLanes; // 10
};
RED4EXT_ASSERT_SIZE(TrafficPersistentLaneConnections, 0x20);
} // namespace world
using worldTrafficPersistentLaneConnections = world::TrafficPersistentLaneConnections;
} // namespace RED4ext

// clang-format on
