#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficNullAreaDynamicBlockade.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficNullAreaDynamicBlockadeData : ISerializable
{
    static constexpr const char* NAME = "worldTrafficNullAreaDynamicBlockadeData";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::TrafficNullAreaDynamicBlockade> nullAreasBlockades; // 30
};
RED4EXT_ASSERT_SIZE(TrafficNullAreaDynamicBlockadeData, 0x40);
} // namespace world
using worldTrafficNullAreaDynamicBlockadeData = world::TrafficNullAreaDynamicBlockadeData;
} // namespace RED4ext

// clang-format on
