#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/GlobalNodeID.hpp>

namespace RED4ext
{
struct Spline;

namespace world
{
struct __declspec(align(0x10)) StreamingQueryRoadData
{
    static constexpr const char* NAME = "worldStreamingQueryRoadData";
    static constexpr const char* ALIAS = NAME;

    Transform transform; // 00
    Handle<Spline> splineData; // 20
    world::GlobalNodeID roadGlobalNodeId; // 30
    float totalRoadWidth; // 38
    uint16_t connectedRoadsStartIndex; // 3C
    uint16_t connectedRoadsCount; // 3E
};
RED4EXT_ASSERT_SIZE(StreamingQueryRoadData, 0x40);
} // namespace world
using worldStreamingQueryRoadData = world::StreamingQueryRoadData;
} // namespace RED4ext

// clang-format on
