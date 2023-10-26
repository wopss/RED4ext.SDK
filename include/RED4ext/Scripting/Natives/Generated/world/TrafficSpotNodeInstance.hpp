#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AISpotNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) TrafficSpotNodeInstance : world::AISpotNodeInstance
{
    static constexpr const char* NAME = "worldTrafficSpotNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TrafficSpotNodeInstance, 0xF0);
} // namespace world
using worldTrafficSpotNodeInstance = world::TrafficSpotNodeInstance;
} // namespace RED4ext

// clang-format on
