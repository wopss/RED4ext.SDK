#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/TrafficGenMeshImpact.hpp>

namespace RED4ext
{
struct TrafficGenTrafficSetting
{
    static constexpr const char* NAME = "TrafficGenTrafficSetting";
    static constexpr const char* ALIAS = NAME;

    TrafficGenMeshImpact meshImpact; // 00
};
RED4EXT_ASSERT_SIZE(TrafficGenTrafficSetting, 0x2);
} // namespace RED4ext

// clang-format on
