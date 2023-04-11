#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficSyncPointDefinition
{
    static constexpr const char* NAME = "worldTrafficSyncPointDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<NodeRef> laneRefs; // 00
    DynArray<float> lanePositions; // 10
    float length; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(TrafficSyncPointDefinition, 0x28);
} // namespace world
using worldTrafficSyncPointDefinition = world::TrafficSyncPointDefinition;
} // namespace RED4ext

// clang-format on
