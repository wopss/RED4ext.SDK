#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace rend {
enum class PostFx_ScanningState : int8_t
{
    Off = 0,
    Scanning = 2,
    Cancelled = 3,
    Complete = 4,
};
} // namespace rend
using rendPostFx_ScanningState = rend::PostFx_ScanningState;
} // namespace RED4ext

// clang-format on
