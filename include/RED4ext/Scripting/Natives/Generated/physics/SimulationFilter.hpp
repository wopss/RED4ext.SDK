#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace physics { 
struct SimulationFilter
{
    static constexpr const char* NAME = "physicsSimulationFilter";
    static constexpr const char* ALIAS = "SimulationFilter";

    uint64_t mask1; // 00
    uint64_t mask2; // 08
};
RED4EXT_ASSERT_SIZE(SimulationFilter, 0x10);
} // namespace physics
using SimulationFilter = physics::SimulationFilter;
} // namespace RED4ext
