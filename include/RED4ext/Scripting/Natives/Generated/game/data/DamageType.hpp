#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class DamageType : int32_t
{
    Chemical = 0,
    Electric = 1,
    Physical = 2,
    Thermal = 3,
    Count = 4,
    Invalid = 5,
};
} // namespace game::data
using gamedataDamageType = game::data::DamageType;
} // namespace RED4ext

// clang-format on
