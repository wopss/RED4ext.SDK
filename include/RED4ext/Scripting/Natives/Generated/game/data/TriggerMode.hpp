#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class TriggerMode : int32_t
{
    Burst = 0,
    Charge = 1,
    FullAuto = 2,
    Lock = 3,
    SemiAuto = 4,
    Windup = 5,
    Count = 6,
    Invalid = 7,
};
} // namespace game::data
using gamedataTriggerMode = game::data::TriggerMode;
} // namespace RED4ext

// clang-format on
