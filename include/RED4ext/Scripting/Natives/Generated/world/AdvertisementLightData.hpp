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
    bool useInTransparents; // 20
    bool useInParticles; // 21
    bool sceneDiffuse; // 22
    bool directional; // 23
    bool clampAttenuation; // 24
    uint8_t scaleGI; // 25
    uint8_t scaleEnvProbes; // 26
    uint8_t sceneSpecularScale; // 27
    uint8_t scaleVolFog; // 28
    int8_t roughnessBias; // 29
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
    rend::SLightFlickering flicker; // 40
    EEnvColorGroup envColorGroup; // 4C
    uint8_t colorGroupSaturation; // 4D
    uint8_t portalAngleCutoff; // 4E
    bool allowDistantLight; // 4F
    float innerAngle; // 50
    float outerAngle; // 54
    float shadowAngle; // 58
    float shadowRadius; // 5C
    float softness; // 60
    EAreaLightShape areaShape; // 64
    bool areaTwoSided; // 68
    bool spotCapsule; // 69
    uint8_t unk6A[0x6C - 0x6A]; // 6A
    float sourceRadius; // 6C
    float capsuleLength; // 70
    float areaRectSideA; // 74
    float areaRectSideB; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    RaRef<CIESDataResource> iesProfile; // 80
    uint8_t unk88[0x90 - 0x88]; // 88
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
