#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/res/StreamedResource.hpp>

namespace RED4ext
{
namespace world { 
struct TrafficPersistentLaneConnectionsResource : res::StreamedResource
{
    static constexpr const char* NAME = "worldTrafficPersistentLaneConnectionsResource";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(TrafficPersistentLaneConnectionsResource, 0x70);
} // namespace world
} // namespace RED4ext
