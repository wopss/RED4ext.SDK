#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace world { struct TrafficNullAreaCollisionData; }
namespace world { struct TrafficNullAreaDynamicBlockadeData; }

namespace world
{
struct TrafficNullAreaCollisionResource : CResource
{
    static constexpr const char* NAME = "worldTrafficNullAreaCollisionResource";
    static constexpr const char* ALIAS = NAME;

    Handle<world::TrafficNullAreaCollisionData> nullAreasCollisionData; // 40
    Handle<world::TrafficNullAreaDynamicBlockadeData> nullAreaBlockadeData; // 50
};
RED4EXT_ASSERT_SIZE(TrafficNullAreaCollisionResource, 0x60);
} // namespace world
using worldTrafficNullAreaCollisionResource = world::TrafficNullAreaCollisionResource;
} // namespace RED4ext

// clang-format on
