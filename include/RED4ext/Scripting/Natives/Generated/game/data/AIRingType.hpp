#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class AIRingType : int32_t
{
    Approach = 0,
    Close = 1,
    Default = 2,
    Defend = 3,
    Extreme = 4,
    Far = 5,
    LatestActive = 6,
    Medium = 7,
    Melee = 8,
    Support = 9,
    Undefined = 10,
    Count = 11,
    Invalid = 12,
};
} // namespace game::data
using gamedataAIRingType = game::data::AIRingType;
} // namespace RED4ext

// clang-format on
