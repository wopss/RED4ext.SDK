#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/EAreaLightShape.hpp>
#include <RED4ext/Scripting/Natives/Generated/EEnvColorGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/ELightShadowSoftnessMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ELightType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ELightUnit.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/ContactShadowReciever.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightAttenuation.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/SLightFlickering.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CIESDataResource;

namespace world
{
struct StaticLightNode : world::Node
{
    static constexpr const char* NAME = "worldStaticLightNode";
    static constexpr const char* ALIAS = NAME;

    Color color; // 38
    float temperature; // 3C
    float radius; // 40
    ELightUnit unit; // 44
    float intensity; // 48
    float rayTracingIntensityScale; // 4C
    bool rtxdiOverrideGlobalRayOffset; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    float rtxdiRayOffsetMin; // 54
    float rtxdiRayOffsetMax; // 58
    float rtxdiRayScale; // 5C
    bool rtxdiEnableLight; // 60
    uint8_t unk61[0x64 - 0x61]; // 61
    float EV; // 64
    ELightType type; // 68
    uint8_t scaleGI; // 6C
    uint8_t scaleEnvProbes; // 6D
    uint8_t sceneSpecularScale; // 6E
    uint8_t scaleVolFog; // 6F
    int8_t roughnessBias; // 70
    bool useInTransparents; // 71
    bool useInParticles; // 72
    bool sceneDiffuse; // 73
    bool directional; // 74
    bool clampAttenuation; // 75
    rend::LightChannel lightChannel; // 76
    rend::LightGroup group; // 78
    rend::LightAttenuation attenuation; // 79
    bool enableLocalShadows; // 7A
    bool enableLocalShadowsForceStaticsOnly; // 7B
    rend::ContactShadowReciever contactShadows; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
    float shadowFadeDistance; // 80
    float shadowFadeRange; // 84
    ELightShadowSoftnessMode shadowSoftnessMode; // 88
    float rayTracingLightSourceRadius; // 8C
    float rayTracingContactShadowRange; // 90
    rend::SLightFlickering flicker; // 94
    EEnvColorGroup envColorGroup; // A0
    uint8_t colorGroupSaturation; // A1
    uint8_t portalAngleCutoff; // A2
    bool allowDistantLight; // A3
    float innerAngle; // A4
    float outerAngle; // A8
    float shadowAngle; // AC
    float shadowRadius; // B0
    float softness; // B4
    EAreaLightShape areaShape; // B8
    bool areaTwoSided; // BC
    bool spotCapsule; // BD
    uint8_t unkBE[0xC0 - 0xBE]; // BE
    float sourceRadius; // C0
    float capsuleLength; // C4
    float areaRectSideA; // C8
    float areaRectSideB; // CC
    RaRef<CIESDataResource> iesProfile; // D0
    float autoHideDistance; // D8
    uint8_t unkDC[0xE0 - 0xDC]; // DC
};
RED4EXT_ASSERT_SIZE(StaticLightNode, 0xE0);
} // namespace world
using worldStaticLightNode = world::StaticLightNode;
} // namespace RED4ext

// clang-format on
