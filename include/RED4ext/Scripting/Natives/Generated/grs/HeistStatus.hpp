#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace grs {
enum class HeistStatus : int32_t
{
    Waiting = 0,
    Starting = 1,
    Lobby = 2,
    InGame = 3,
    Ending = 4,
    Victory = 5,
    Failure = 6,
};
} // namespace grs
using grsHeistStatus = grs::HeistStatus;
} // namespace RED4ext

// clang-format on
