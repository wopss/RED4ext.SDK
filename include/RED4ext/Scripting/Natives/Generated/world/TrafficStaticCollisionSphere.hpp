#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficStaticCollisionSphere
{
    static constexpr const char* NAME = "worldTrafficStaticCollisionSphere";
    static constexpr const char* ALIAS = NAME;

    Vector3 worldPos; // 00
};
RED4EXT_ASSERT_SIZE(TrafficStaticCollisionSphere, 0xC);
} // namespace world
using worldTrafficStaticCollisionSphere = world::TrafficStaticCollisionSphere;
} // namespace RED4ext

// clang-format on
