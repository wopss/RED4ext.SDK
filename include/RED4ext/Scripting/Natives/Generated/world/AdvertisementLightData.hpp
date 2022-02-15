#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/EAreaLightShape.hpp>
#include <RED4ext/Scripting/Natives/Generated/EEnvColorGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/ELightShadowSoftnessMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/ELightType.hpp>
#include <RED4ext/Scripting/Natives/Generated/ELightUnit.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/ContactShadowReciever.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightAttenuation.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/SLightFlickering.hpp>

namespace RED4ext
{
struct CIESDataResource;

namespace world { 
struct AdvertisementLightData
{
    static constexpr const char* NAME = "worldAdvertisementLightData";
    static constexpr const char* ALIAS = NAME;

    Color color; // 00
    float temperature; // 04
    float radius; // 08
    ELightUnit unit; // 0C
    float intensity; // 10
    float rayTracingIntensityScale; // 14
    float EV; // 18
    ELightType type; // 1C
    uint8_t scaleGI; // 20
    uint8_t scaleEnvProbes; // 21
    uint8_t sceneSpecularScale; // 22
    uint8_t scaleVolFog; // 23
    int8_t roughnessBias; // 24
    bool useInTransparents; // 25
    bool useInParticles; // 26
    bool sceneDiffuse; // 27
    bool directional; // 28
    bool clampAttenuation; // 29
    rend::LightChannel lightChannel; // 2A
    rend::LightGroup group; // 2C
    rend::LightAttenuation attenuation; // 2D
    bool enableLocalShadows; // 2E
    bool enableLocalShadowsForceStaticsOnly; // 2F
    rend::ContactShadowReciever contactShadows; // 30
    uint8_t unk31[0x34 - 0x31]; // 31
    float shadowFadeDistance; // 34
    float shadowFadeRange; // 38
    ELightShadowSoftnessMode shadowSoftnessMode; // 3C
    float rayTracingLightSourceRadius; // 40
    float rayTracingContactShadowRange; // 44
    rend::SLightFlickering flicker; // 48
    EEnvColorGroup envColorGroup; // 54
    uint8_t colorGroupSaturation; // 55
    uint8_t portalAngleCutoff; // 56
    bool allowDistantLight; // 57
    float innerAngle; // 58
    float outerAngle; // 5C
    float shadowAngle; // 60
    float shadowRadius; // 64
    float softness; // 68
    EAreaLightShape areaShape; // 6C
    bool areaTwoSided; // 70
    bool spotCapsule; // 71
    uint8_t unk72[0x74 - 0x72]; // 72
    float sourceRadius; // 74
    float capsuleLength; // 78
    float areaRectSideA; // 7C
    float areaRectSideB; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
    RaRef<CIESDataResource> iesProfile; // 88
    Transform transform; // 90
    bool isEnabled; // B0
    bool useAutoHideDistance; // B1
    uint8_t unkB2[0xB8 - 0xB2]; // B2
    CName lightName; // B8
    float autoHideDistance; // C0
    uint8_t unkC4[0xD0 - 0xC4]; // C4
};
RED4EXT_ASSERT_SIZE(AdvertisementLightData, 0xD0);
} // namespace world
} // namespace RED4ext
