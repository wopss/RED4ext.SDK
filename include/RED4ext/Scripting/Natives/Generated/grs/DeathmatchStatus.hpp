#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace grs {
enum class DeathmatchStatus : int32_t
{
    Waiting = 0,
    AdditionalWaiting = 1,
    Starting = 2,
    InGame = 3,
    Ending = 4,
    Sumup = 5,
};
} // namespace grs
using grsDeathmatchStatus = grs::DeathmatchStatus;
} // namespace RED4ext

// clang-format on
