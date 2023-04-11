#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficLanePolygonRepresentation
{
    static constexpr const char* NAME = "worldTrafficLanePolygonRepresentation";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector3> outline; // 00
    DynArray<Vector2> polygon; // 10
};
RED4EXT_ASSERT_SIZE(TrafficLanePolygonRepresentation, 0x20);
} // namespace world
using worldTrafficLanePolygonRepresentation = world::TrafficLanePolygonRepresentation;
} // namespace RED4ext

// clang-format on
