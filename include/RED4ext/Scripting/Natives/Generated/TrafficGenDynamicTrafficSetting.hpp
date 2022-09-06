#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/TrafficGenDynamicImpact.hpp>

namespace RED4ext
{
struct TrafficGenDynamicTrafficSetting
{
    static constexpr const char* NAME = "TrafficGenDynamicTrafficSetting";
    static constexpr const char* ALIAS = NAME;

    TrafficGenDynamicImpact impact; // 00
};
RED4EXT_ASSERT_SIZE(TrafficGenDynamicTrafficSetting, 0x2);
} // namespace RED4ext

// clang-format on
