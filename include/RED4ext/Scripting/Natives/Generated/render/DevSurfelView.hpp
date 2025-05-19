#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace render {
enum class DevSurfelView : int32_t
{
    ALBEDO = 0,
    NORMAL = 1,
    SHADOWS = 2,
    CLOSEST_PROBE = 3,
    EMISSIVE = 4,
    LIGHTING = 5,
    BOUNCE = 6,
    INSIDE = 7,
    SHADOW = 8,
};
} // namespace render
using renderDevSurfelView = render::DevSurfelView;
} // namespace RED4ext

// clang-format on
