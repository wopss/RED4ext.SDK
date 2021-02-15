#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world { 
enum class NavigationRequestStatus : uint32_t
{
    OK = 0,
    InvalidStartingPosition = 1,
    InvalidEndPosition = 2,
    OtherError = 3,
};
} // namespace world
} // namespace RED4ext
