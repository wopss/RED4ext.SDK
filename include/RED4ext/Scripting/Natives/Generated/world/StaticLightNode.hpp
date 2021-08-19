#pragma once

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

namespace world { 
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
    float EV; // 50
    ELightType type; // 54
    bool useInTransparents; // 58
    bool useInParticles; // 59
    bool sceneDiffuse; // 5A
    bool directional; // 5B
    bool clampAttenuation; // 5C
    uint8_t scaleGI; // 5D
    uint8_t scaleEnvProbes; // 5E
    uint8_t sceneSpecularScale; // 5F
    uint8_t scaleVolFog; // 60
    int8_t roughnessBias; // 61
    rend::LightChannel lightChannel; // 62
    rend::LightGroup group; // 64
    rend::LightAttenuation attenuation; // 65
    bool enableLocalShadows; // 66
    bool enableLocalShadowsForceStaticsOnly; // 67
    rend::ContactShadowReciever contactShadows; // 68
    uint8_t unk69[0x6C - 0x69]; // 69
    float shadowFadeDistance; // 6C
    float shadowFadeRange; // 70
    ELightShadowSoftnessMode shadowSoftnessMode; // 74
    rend::SLightFlickering flicker; // 78
    EEnvColorGroup envColorGroup; // 84
    uint8_t colorGroupSaturation; // 85
    uint8_t portalAngleCutoff; // 86
    bool allowDistantLight; // 87
    float innerAngle; // 88
    float outerAngle; // 8C
    float shadowAngle; // 90
    float shadowRadius; // 94
    float softness; // 98
    EAreaLightShape areaShape; // 9C
    bool areaTwoSided; // A0
    bool spotCapsule; // A1
    uint8_t unkA2[0xA4 - 0xA2]; // A2
    float sourceRadius; // A4
    float capsuleLength; // A8
    float areaRectSideA; // AC
    float areaRectSideB; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
    RaRef<CIESDataResource> iesProfile; // B8
    float autoHideDistance; // C0
    uint8_t unkC4[0xC8 - 0xC4]; // C4
};
RED4EXT_ASSERT_SIZE(StaticLightNode, 0xC8);
} // namespace world
} // namespace RED4ext
