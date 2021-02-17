#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/world/TrafficLaneUID.hpp>

namespace RED4ext
{
namespace game { 
struct CompiledCrowdTrafficData
{
    static constexpr const char* NAME = "gameCompiledCrowdTrafficData";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::TrafficLaneUID> trafficLaneUIDs; // 00
};
RED4EXT_ASSERT_SIZE(CompiledCrowdTrafficData, 0x10);
} // namespace game
} // namespace RED4ext
