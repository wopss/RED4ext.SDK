#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficSpotDirection.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficSpotDefinition : ISerializable
{
    static constexpr const char* NAME = "worldTrafficSpotDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    float length; // 38
    world::TrafficSpotDirection direction; // 3C
    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(TrafficSpotDefinition, 0x48);
} // namespace world
using worldTrafficSpotDefinition = world::TrafficSpotDefinition;
} // namespace RED4ext

// clang-format on
