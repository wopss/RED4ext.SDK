#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CollisionGroupEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficCollisionGroupNode : world::Node
{
    static constexpr const char* NAME = "worldTrafficCollisionGroupNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::CollisionGroupEntry> collisionEntries; // 38
};
RED4EXT_ASSERT_SIZE(TrafficCollisionGroupNode, 0x48);
} // namespace world
using worldTrafficCollisionGroupNode = world::TrafficCollisionGroupNode;
} // namespace RED4ext

// clang-format on
