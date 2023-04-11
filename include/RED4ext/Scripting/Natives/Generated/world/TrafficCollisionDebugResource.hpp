#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace world { struct TrafficCollisionDebug; }

namespace world
{
struct TrafficCollisionDebugResource : CResource
{
    static constexpr const char* NAME = "worldTrafficCollisionDebugResource";
    static constexpr const char* ALIAS = NAME;

    Handle<world::TrafficCollisionDebug> data; // 40
};
RED4EXT_ASSERT_SIZE(TrafficCollisionDebugResource, 0x50);
} // namespace world
using worldTrafficCollisionDebugResource = world::TrafficCollisionDebugResource;
} // namespace RED4ext

// clang-format on
