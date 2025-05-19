#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class HackCategory : int32_t
{
    BreachingHack = 0,
    ControlHack = 1,
    CovertHack = 2,
    DamageHack = 3,
    DeviceHack = 4,
    NotAHack = 5,
    UltimateHack = 6,
    VehicleHack = 7,
    Count = 8,
    Invalid = 9,
};
} // namespace game::data
using gamedataHackCategory = game::data::HackCategory;
} // namespace RED4ext

// clang-format on
