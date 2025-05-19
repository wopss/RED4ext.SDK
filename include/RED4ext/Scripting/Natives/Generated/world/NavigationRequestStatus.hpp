#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world {
enum class NavigationRequestStatus : int32_t
{
    OK = 0,
    InvalidStartingPosition = 1,
    InvalidEndPosition = 2,
    OtherError = 3,
};
} // namespace world
using worldNavigationRequestStatus = world::NavigationRequestStatus;
} // namespace RED4ext

// clang-format on
