#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class PingType : int32_t
{
    Device = 0,
    Door = 1,
    Elevator = 2,
    Junction = 3,
    Location = 4,
    Loot = 5,
    Trap = 6,
    Count = 7,
    Invalid = 8,
};
} // namespace game::data
using gamedataPingType = game::data::PingType;
} // namespace RED4ext

// clang-format on
