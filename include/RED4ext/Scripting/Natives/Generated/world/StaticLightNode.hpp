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
    uint8_t scaleGI; // 58
    uint8_t scaleEnvProbes; // 59
    uint8_t sceneSpecularScale; // 5A
    uint8_t scaleVolFog; // 5B
    int8_t roughnessBias; // 5C
    bool useInTransparents; // 5D
    bool useInParticles; // 5E
    bool sceneDiffuse; // 5F
    bool directional; // 60
    bool clampAttenuation; // 61
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
    float rayTracingLightSourceRadius; // 78
    float rayTracingContactShadowRange; // 7C
    rend::SLightFlickering flicker; // 80
    EEnvColorGroup envColorGroup; // 8C
    uint8_t colorGroupSaturation; // 8D
    uint8_t portalAngleCutoff; // 8E
    bool allowDistantLight; // 8F
    float innerAngle; // 90
    float outerAngle; // 94
    float shadowAngle; // 98
    float shadowRadius; // 9C
    float softness; // A0
    EAreaLightShape areaShape; // A4
    bool areaTwoSided; // A8
    bool spotCapsule; // A9
    uint8_t unkAA[0xAC - 0xAA]; // AA
    float sourceRadius; // AC
    float capsuleLength; // B0
    float areaRectSideA; // B4
    float areaRectSideB; // B8
    uint8_t unkBC[0xC0 - 0xBC]; // BC
    RaRef<CIESDataResource> iesProfile; // C0
    float autoHideDistance; // C8
    uint8_t unkCC[0xD0 - 0xCC]; // CC
};
RED4EXT_ASSERT_SIZE(StaticLightNode, 0xD0);
} // namespace world
} // namespace RED4ext
