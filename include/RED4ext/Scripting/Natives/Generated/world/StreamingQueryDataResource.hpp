#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/StreamingQueryRoadData.hpp>

namespace RED4ext
{
namespace world
{
struct StreamingQueryDataResource : CResource
{
    static constexpr const char* NAME = "worldStreamingQueryDataResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::StreamingQueryRoadData> roadDatas; // 40
    DynArray<uint16_t> connectedRoadDataIndices; // 50
};
RED4EXT_ASSERT_SIZE(StreamingQueryDataResource, 0x60);
} // namespace world
using worldStreamingQueryDataResource = world::StreamingQueryDataResource;
} // namespace RED4ext

// clang-format on
