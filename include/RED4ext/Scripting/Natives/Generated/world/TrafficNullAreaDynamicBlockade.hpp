#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLaneUID.hpp>

namespace RED4ext
{
namespace world { 
struct TrafficNullAreaDynamicBlockade
{
    static constexpr const char* NAME = "worldTrafficNullAreaDynamicBlockade";
    static constexpr const char* ALIAS = NAME;

    uint64_t areaID; // 00
    DynArray<uint64_t> offmeshLinks; // 08
    DynArray<world::TrafficLaneUID> affectedTrafficLanes; // 18
};
RED4EXT_ASSERT_SIZE(TrafficNullAreaDynamicBlockade, 0x28);
} // namespace world
} // namespace RED4ext
