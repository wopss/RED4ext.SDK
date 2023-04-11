#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficLaneCrowdFragment.hpp>

namespace RED4ext
{
namespace world
{
struct TrafficLaneCrowdCreationInfo
{
    static constexpr const char* NAME = "worldTrafficLaneCrowdCreationInfo";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::TrafficLaneCrowdFragment> connectedFragments; // 00
};
RED4EXT_ASSERT_SIZE(TrafficLaneCrowdCreationInfo, 0x10);
} // namespace world
using worldTrafficLaneCrowdCreationInfo = world::TrafficLaneCrowdCreationInfo;
} // namespace RED4ext

// clang-format on
