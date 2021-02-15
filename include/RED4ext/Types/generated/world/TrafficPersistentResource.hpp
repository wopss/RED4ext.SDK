#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/res/StreamedResource.hpp>
#include <RED4ext/Types/generated/world/TrafficPersistentData.hpp>

namespace RED4ext
{
namespace world { 
struct TrafficPersistentResource : res::StreamedResource
{
    static constexpr const char* NAME = "worldTrafficPersistentResource";
    static constexpr const char* ALIAS = NAME;

    world::TrafficPersistentData data; // 40
};
RED4EXT_ASSERT_SIZE(TrafficPersistentResource, 0x150);
} // namespace world
} // namespace RED4ext
