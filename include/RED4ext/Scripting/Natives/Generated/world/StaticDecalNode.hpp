#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EDecalRenderMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderDecalNormalsBlendingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct IMaterial;

namespace world
{
struct __declspec(align(0x10)) StaticDecalNode : world::Node
{
    static constexpr const char* NAME = "worldStaticDecalNode";
    static constexpr const char* ALIAS = NAME;

    RaRef<IMaterial> material; // 38
    HDRColor diffuseColorScale; // 40
    float autoHideDistance; // 50
    float forcedAutoHideDistance; // 54
    float alpha; // 58
    float normalThreshold; // 5C
    float roughnessScale; // 60
    uint16_t orderNo; // 64
    ERenderObjectType surfaceType; // 66
    EDecalRenderMode decalRenderMode; // 67
    RenderDecalNormalsBlendingMode normalsBlendingMode; // 68
    uint8_t decalNodeVersion; // 69
    bool isStretchingEnabled; // 6A
    bool verticalFlip; // 6B
    bool horizontalFlip; // 6C
    bool enableNormalTreshold; // 6D
    bool shouldCollectWithRayTracing; // 6E
    uint8_t unk6F[0x70 - 0x6F]; // 6F
};
RED4EXT_ASSERT_SIZE(StaticDecalNode, 0x70);
} // namespace world
using worldStaticDecalNode = world::StaticDecalNode;
} // namespace RED4ext

// clang-format on
