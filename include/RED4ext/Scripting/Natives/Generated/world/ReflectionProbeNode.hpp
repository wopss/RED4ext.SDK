#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/env/UtilsNeighborMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/env/UtilsReflectionProbeAmbientContributionMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CReflectionProbeDataResource;

namespace world
{
struct __declspec(align(0x10)) ReflectionProbeNode : world::Node
{
    static constexpr const char* NAME = "worldReflectionProbeNode";
    static constexpr const char* ALIAS = NAME;

    RaRef<CReflectionProbeDataResource> probeDataRef; // 38
    uint8_t unk40[0x42 - 0x40]; // 40
    bool globalProbe; // 42
    env::UtilsReflectionProbeAmbientContributionMode ambientMode; // 43
    bool allInShadow; // 44
    bool hideSkyColor; // 45
    bool volFogAmbient; // 46
    bool boxProjection; // 47
    bool noFadeBlend; // 48
    bool subScene; // 49
    uint8_t unk4A[0x4C - 0x4A]; // 4A
    Vector3 edgeScale; // 4C
    Vector3 captureOffset; // 58
    uint8_t unk64[0x70 - 0x64]; // 64
    HDRColor simpleFogColor; // 70
    float simpleFogDensity; // 80
    float skyScale; // 84
    float emissiveScale; // 88
    float reflectionDimming; // 8C
    float nearClipDistance; // 90
    float farClipDistance; // 94
    float streamingHeight; // 98
    float streamingDistance; // 9C
    uint8_t blendRange; // A0
    uint8_t priority; // A1
    rend::LightChannel lightChannels; // A2
    rend::LightChannel volumeChannels; // A4
    env::UtilsNeighborMode neighborMode; // A6
    int8_t brightnessEVClamp; // A7
    uint8_t unkA8[0xB0 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(ReflectionProbeNode, 0xB0);
} // namespace world
using worldReflectionProbeNode = world::ReflectionProbeNode;
} // namespace RED4ext

// clang-format on
