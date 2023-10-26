#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/SpeedSplineNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) RaceSplineNodeInstance : world::SpeedSplineNodeInstance
{
    static constexpr const char* NAME = "worldRaceSplineNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RaceSplineNodeInstance, 0xF0);
} // namespace world
using worldRaceSplineNodeInstance = world::RaceSplineNodeInstance;
} // namespace RED4ext

// clang-format on
