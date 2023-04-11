#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficStaticCollisionSphere.hpp>

namespace RED4ext
{
namespace world
{
struct CrowdNullAreaCollisionData
{
    static constexpr const char* NAME = "worldCrowdNullAreaCollisionData";
    static constexpr const char* ALIAS = NAME;

    uint64_t areaID; // 00
    DynArray<world::TrafficStaticCollisionSphere> collisions; // 08
};
RED4EXT_ASSERT_SIZE(CrowdNullAreaCollisionData, 0x18);
} // namespace world
using worldCrowdNullAreaCollisionData = world::CrowdNullAreaCollisionData;
} // namespace RED4ext

// clang-format on
