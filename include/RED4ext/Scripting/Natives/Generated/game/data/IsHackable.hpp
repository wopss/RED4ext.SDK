#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class IsHackable : int32_t
{
    Always = 0,
    Dynamic = 1,
    Never = 2,
    Count = 3,
    Invalid = 4,
};
} // namespace game::data
using gamedataIsHackable = game::data::IsHackable;
} // namespace RED4ext

// clang-format on
