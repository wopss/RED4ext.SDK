#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class ChargeStep : int32_t
{
    Idle = 0,
    Charging = 1,
    Charged = 2,
    Overcharging = 3,
    Discharging = 4,
};
} // namespace game::data
using gamedataChargeStep = game::data::ChargeStep;
} // namespace RED4ext

// clang-format on
