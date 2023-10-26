#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SplineNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) TrafficSplineNodeInstance : world::SplineNodeInstance
{
    static constexpr const char* NAME = "worldTrafficSplineNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TrafficSplineNodeInstance, 0xE0);
} // namespace world
using worldTrafficSplineNodeInstance = world::TrafficSplineNodeInstance;
} // namespace RED4ext

// clang-format on
