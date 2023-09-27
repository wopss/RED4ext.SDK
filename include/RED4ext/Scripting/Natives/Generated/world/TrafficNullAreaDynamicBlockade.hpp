#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLaneUID.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficNullAreaDynamicBlockade
{
    static constexpr const char* NAME = "worldTrafficNullAreaDynamicBlockade";
    static constexpr const char* ALIAS = NAME;

    uint64_t areaID; // 00
    DynArray<uint64_t> offmeshLinks; // 08
    DynArray<world::TrafficLaneUID> affectedTrafficLanes; // 18
    bool permanentlyEnabledByDefault; // 28
    uint8_t unk29[0x30 - 0x29]; // 29
};
RED4EXT_ASSERT_SIZE(TrafficNullAreaDynamicBlockade, 0x30);
} // namespace world
using worldTrafficNullAreaDynamicBlockade = world::TrafficNullAreaDynamicBlockade;
} // namespace RED4ext

// clang-format on
