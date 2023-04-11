#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLaneUID.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficStaticCollisionSphere.hpp>

namespace RED4ext
{
namespace world
{
struct StaticLaneCollisions
{
    static constexpr const char* NAME = "worldStaticLaneCollisions";
    static constexpr const char* ALIAS = NAME;

    world::TrafficLaneUID lane; // 00
    DynArray<world::TrafficStaticCollisionSphere> collisions; // 10
    float deadEndStart; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(StaticLaneCollisions, 0x28);
} // namespace world
using worldStaticLaneCollisions = world::StaticLaneCollisions;
} // namespace RED4ext

// clang-format on
