#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StaticLaneCollisions.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficStaticCollisionData : ISerializable
{
    static constexpr const char* NAME = "worldTrafficStaticCollisionData";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::StaticLaneCollisions> laneCollisions; // 30
};
RED4EXT_ASSERT_SIZE(TrafficStaticCollisionData, 0x40);
} // namespace world
using worldTrafficStaticCollisionData = world::TrafficStaticCollisionData;
} // namespace RED4ext

// clang-format on
