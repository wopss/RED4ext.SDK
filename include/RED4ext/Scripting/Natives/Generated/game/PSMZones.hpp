#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class PSMZones : int32_t
{
    Any = -1,
    Default = 0,
    Public = 1,
    Safe = 2,
    Restricted = 3,
    Dangerous = 4,
};
} // namespace game
using gamePSMZones = game::PSMZones;
} // namespace RED4ext

// clang-format on
