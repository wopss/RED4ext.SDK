#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace world { struct TrafficSpotCompiled; }

namespace world { 
struct TrafficPersistentLaneSpots
{
    static constexpr const char* NAME = "worldTrafficPersistentLaneSpots";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<world::TrafficSpotCompiled>> spots; // 00
};
RED4EXT_ASSERT_SIZE(TrafficPersistentLaneSpots, 0x10);
} // namespace world
} // namespace RED4ext
