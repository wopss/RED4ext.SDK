#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IEffect.hpp>

namespace RED4ext
{
namespace ink { 
struct PointCloudEffect : ink::IEffect
{
    static constexpr const char* NAME = "inkPointCloudEffect";
    static constexpr const char* ALIAS = NAME;

    float repeat; // 68
    float offsetX; // 6C
    float offsetY; // 70
    float angle; // 74
    float fovScale; // 78
    float parallaxDepth; // 7C
    float depthToOpacity; // 80
    float depthToBrightness; // 84
};
RED4EXT_ASSERT_SIZE(PointCloudEffect, 0x88);
} // namespace ink
} // namespace RED4ext
