#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace nav {
enum class PathQueryDebugStatus : int32_t
{
    InvalidQuery = 0,
    Active = 1,
    WaitingForStreaming = 2,
    Completed = 3,
    NoPathPossible = 4,
};
} // namespace nav
using navPathQueryDebugStatus = nav::PathQueryDebugStatus;
} // namespace RED4ext

// clang-format on
