#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLaneUID.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficPersistentDebugResource : res::StreamedResource
{
    static constexpr const char* NAME = "worldTrafficPersistentDebugResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::TrafficLaneUID> brokenUIDs; // 40
    DynArray<world::TrafficLaneUID> brokenUIDsDeadEnds; // 50
};
RED4EXT_ASSERT_SIZE(TrafficPersistentDebugResource, 0x60);
} // namespace world
using worldTrafficPersistentDebugResource = world::TrafficPersistentDebugResource;
} // namespace RED4ext

// clang-format on
