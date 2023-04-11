#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/community/ECommunitySpawnTime.hpp>

namespace RED4ext
{
namespace community
{
struct TimePeriod
{
    static constexpr const char* NAME = "communityTimePeriod";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    community::ECommunitySpawnTime hour; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(TimePeriod, 0x10);
} // namespace community
using communityTimePeriod = community::TimePeriod;
} // namespace RED4ext

// clang-format on
