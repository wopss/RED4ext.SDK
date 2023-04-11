#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficPersistentData.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficPersistentResource : res::StreamedResource
{
    static constexpr const char* NAME = "worldTrafficPersistentResource";
    static constexpr const char* ALIAS = NAME;

    world::TrafficPersistentData data; // 40
};
RED4EXT_ASSERT_SIZE(TrafficPersistentResource, 0x150);
} // namespace world
using worldTrafficPersistentResource = world::TrafficPersistentResource;
} // namespace RED4ext

// clang-format on
