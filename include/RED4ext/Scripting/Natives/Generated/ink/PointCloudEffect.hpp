#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink
{
struct PointCloudEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkPointCloudEffect";
    static constexpr const char* ALIAS = NAME;

    float repeat; // 60
    float offsetX; // 64
    float offsetY; // 68
    float angle; // 6C
    float fovScale; // 70
    float parallaxDepth; // 74
    float depthToOpacity; // 78
    float depthToBrightness; // 7C
};
RED4EXT_ASSERT_SIZE(PointCloudEffect, 0x80);
} // namespace ink
using inkPointCloudEffect = ink::PointCloudEffect;
} // namespace RED4ext

// clang-format on
