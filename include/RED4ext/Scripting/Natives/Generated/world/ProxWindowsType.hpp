#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world {
enum class ProxWindowsType : int8_t
{
    SkipWindows = 0,
    PropagateWindows = 1,
    BakeLongDistantWindows = 2,
    BakeWindowsToBuffer = 3,
};
} // namespace world
using worldProxWindowsType = world::ProxWindowsType;
} // namespace RED4ext

// clang-format on
