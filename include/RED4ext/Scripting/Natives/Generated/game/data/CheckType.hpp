#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class CheckType : int32_t
{
    Category = 0,
    Evolution = 1,
    Exist = 2,
    FullyModded = 3,
    None = 4,
    Record = 5,
    Tag = 6,
    Type = 7,
    Count = 8,
    Invalid = 9,
};
} // namespace game::data
using gamedataCheckType = game::data::CheckType;
} // namespace RED4ext

// clang-format on
