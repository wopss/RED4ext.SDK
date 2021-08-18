#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>

namespace RED4ext
{
namespace world { 
struct TrafficPersistentSpatialResource : res::StreamedResource
{
    static constexpr const char* NAME = "worldTrafficPersistentSpatialResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<DynArray<uint16_t>> neighborGroups; // 40
    uint8_t unk50[0x128 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(TrafficPersistentSpatialResource, 0x128);
} // namespace world
} // namespace RED4ext
