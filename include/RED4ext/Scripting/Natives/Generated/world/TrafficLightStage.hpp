#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLightColor.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficLightStage
{
    static constexpr const char* NAME = "worldTrafficLightStage";
    static constexpr const char* ALIAS = NAME;

    world::TrafficLightColor color; // 00
    float duration; // 04
};
RED4EXT_ASSERT_SIZE(TrafficLightStage, 0x8);
} // namespace world
using worldTrafficLightStage = world::TrafficLightStage;
} // namespace RED4ext

// clang-format on
