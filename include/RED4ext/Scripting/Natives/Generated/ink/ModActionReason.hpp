#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class ModActionReason : int8_t
{
    NeedInstall = 0,
    NeedSubscribe = 1,
    NeedUpdate = 2,
    NeedEnable = 3,
    MAX = 4,
};
} // namespace ink
using inkModActionReason = ink::ModActionReason;
} // namespace RED4ext

// clang-format on
