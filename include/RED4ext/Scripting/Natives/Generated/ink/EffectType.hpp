#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class EffectType : int8_t
{
    ScanlineWipe = 0,
    LinearWipe = 1,
    RadialWipe = 2,
    LightSweep = 3,
    BoxBlur = 4,
    Mask = 5,
    Glitch = 6,
    PointCloud = 7,
    ColorFill = 8,
    InnerGlow = 9,
    ColorCorrection = 10,
    Multisampling = 11,
    Blackwall = 12,
};
} // namespace ink
using inkEffectType = ink::EffectType;
} // namespace RED4ext

// clang-format on
