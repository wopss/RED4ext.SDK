#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CrowdNullAreaCollisionData.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/CrowdNullAreaCollisionHeader.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficNullAreaCollisionData : ISerializable
{
    static constexpr const char* NAME = "worldTrafficNullAreaCollisionData";
    static constexpr const char* ALIAS = NAME;

    world::CrowdNullAreaCollisionHeader header; // 30
    DynArray<world::CrowdNullAreaCollisionData> nullAreaCollisions; // 50
};
RED4EXT_ASSERT_SIZE(TrafficNullAreaCollisionData, 0x60);
} // namespace world
using worldTrafficNullAreaCollisionData = world::TrafficNullAreaCollisionData;
} // namespace RED4ext

// clang-format on
