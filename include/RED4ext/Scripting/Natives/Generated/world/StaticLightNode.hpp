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
#include <RED4ext/Scripting/Natives/Generated/rend/EPathTracingLightUsage.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightAttenuation.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RayTracedShadowsPlatform.hpp>
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
    float EV; // 4C
    ELightType type; // 50
    uint8_t scaleGI; // 54
    uint8_t scaleEnvProbes; // 55
    uint8_t sceneSpecularScale; // 56
    uint8_t scaleVolFog; // 57
    int8_t roughnessBias; // 58
    bool useInTransparents; // 59
    bool useInParticles; // 5A
    bool sceneDiffuse; // 5B
    bool directional; // 5C
    bool clampAttenuation; // 5D
    rend::LightChannel lightChannel; // 5E
    rend::LightGroup group; // 60
    rend::LightAttenuation attenuation; // 61
    bool enableLocalShadows; // 62
    bool enableLocalShadowsForceStaticsOnly; // 63
    rend::ContactShadowReciever contactShadows; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
    float shadowFadeDistance; // 68
    float shadowFadeRange; // 6C
    ELightShadowSoftnessMode shadowSoftnessMode; // 70
    rend::RayTracedShadowsPlatform rayTracedShadowsPlatform; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
    float rayTracingLightSourceRadius; // 78
    float rayTracingContactShadowRange; // 7C
    rend::SLightFlickering flicker; // 80
    EEnvColorGroup envColorGroup; // 8C
    uint8_t colorGroupSaturation; // 8D
    uint8_t portalAngleCutoff; // 8E
    bool allowDistantLight; // 8F
    rend::EPathTracingLightUsage pathTracingLightUsage; // 90
    bool pathTracingOverrideScaleGI; // 91
    uint8_t unk92[0x94 - 0x92]; // 92
    float rayTracingIntensityScale; // 94
    float rtxdiShadowStartingDistance; // 98
    float innerAngle; // 9C
    float outerAngle; // A0
    float shadowAngle; // A4
    float shadowRadius; // A8
    float softness; // AC
    EAreaLightShape areaShape; // B0
    bool areaTwoSided; // B4
    bool spotCapsule; // B5
    uint8_t unkB6[0xB8 - 0xB6]; // B6
    float sourceRadius; // B8
    float capsuleLength; // BC
    float areaRectSideA; // C0
    float areaRectSideB; // C4
    RaRef<CIESDataResource> iesProfile; // C8
    float autoHideDistance; // D0
    uint8_t unkD4[0xD8 - 0xD4]; // D4
};
RED4EXT_ASSERT_SIZE(StaticLightNode, 0xD8);
} // namespace world
using worldStaticLightNode = world::StaticLightNode;
} // namespace RED4ext

// clang-format on
