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

    float repeat; // 50
    float offsetX; // 54
    float offsetY; // 58
    float angle; // 5C
    float fovScale; // 60
    float parallaxDepth; // 64
    float depthToOpacity; // 68
    float depthToBrightness; // 6C
};
RED4EXT_ASSERT_SIZE(PointCloudEffect, 0x70);
} // namespace ink
using inkPointCloudEffect = ink::PointCloudEffect;
} // namespace RED4ext

// clang-format on
