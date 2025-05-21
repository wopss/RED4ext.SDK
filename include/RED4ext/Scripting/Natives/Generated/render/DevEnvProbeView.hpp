#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace render {
enum class DevEnvProbeView : int32_t
{
    RADIANCE = 0,
    ALBEDO = 1,
    NORMAL = 2,
    ROUGHNESS = 3,
    METALNESS = 4,
    EMISSIVE = 5,
    SKY_MASK = 6,
};
} // namespace render
using renderDevEnvProbeView = render::DevEnvProbeView;
} // namespace RED4ext

// clang-format on
