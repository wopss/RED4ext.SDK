#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLanePersistent.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficPersistentData
{
    static constexpr const char* NAME = "worldTrafficPersistentData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    DynArray<world::TrafficLanePersistent> lanes; // 08
    DynArray<DynArray<uint16_t>> neighborGroups; // 18
    uint8_t unk28[0x110 - 0x28]; // 28
};
RED4EXT_ASSERT_SIZE(TrafficPersistentData, 0x110);
} // namespace world
using worldTrafficPersistentData = world::TrafficPersistentData;
} // namespace RED4ext

// clang-format on
