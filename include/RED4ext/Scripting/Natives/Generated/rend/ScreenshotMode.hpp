#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace rend {
enum class ScreenshotMode : int32_t
{
    NONE = 0,
    NORMAL = 1,
    NORMAL_MULTISAMPLE = 2,
    LAYERED = 4,
    HIGH_RESOLUTION = 5,
    HIGH_RESOLUTION_LAYERED = 6,
};
} // namespace rend
using rendScreenshotMode = rend::ScreenshotMode;
} // namespace RED4ext

// clang-format on
