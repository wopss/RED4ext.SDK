#pragma once

// clang-format off

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

namespace world
{
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
    bool rtxdiOverrideGlobalRayOffset; // 18
    uint8_t unk19[0x1C - 0x19]; // 19
    float rtxdiRayOffsetMin; // 1C
    float rtxdiRayOffsetMax; // 20
    float rtxdiRayScale; // 24
    bool rtxdiEnableLight; // 28
    uint8_t unk29[0x2C - 0x29]; // 29
    float EV; // 2C
    ELightType type; // 30
    uint8_t scaleGI; // 34
    uint8_t scaleEnvProbes; // 35
    uint8_t sceneSpecularScale; // 36
    uint8_t scaleVolFog; // 37
    int8_t roughnessBias; // 38
    bool useInTransparents; // 39
    bool useInParticles; // 3A
    bool sceneDiffuse; // 3B
    bool directional; // 3C
    bool clampAttenuation; // 3D
    rend::LightChannel lightChannel; // 3E
    rend::LightGroup group; // 40
    rend::LightAttenuation attenuation; // 41
    bool enableLocalShadows; // 42
    bool enableLocalShadowsForceStaticsOnly; // 43
    rend::ContactShadowReciever contactShadows; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
    float shadowFadeDistance; // 48
    float shadowFadeRange; // 4C
    ELightShadowSoftnessMode shadowSoftnessMode; // 50
    float rayTracingLightSourceRadius; // 54
    float rayTracingContactShadowRange; // 58
    rend::SLightFlickering flicker; // 5C
    EEnvColorGroup envColorGroup; // 68
    uint8_t colorGroupSaturation; // 69
    uint8_t portalAngleCutoff; // 6A
    bool allowDistantLight; // 6B
    float innerAngle; // 6C
    float outerAngle; // 70
    float shadowAngle; // 74
    float shadowRadius; // 78
    float softness; // 7C
    EAreaLightShape areaShape; // 80
    bool areaTwoSided; // 84
    bool spotCapsule; // 85
    uint8_t unk86[0x88 - 0x86]; // 86
    float sourceRadius; // 88
    float capsuleLength; // 8C
    float areaRectSideA; // 90
    float areaRectSideB; // 94
    RaRef<CIESDataResource> iesProfile; // 98
    Transform transform; // A0
    bool isEnabled; // C0
    bool useAutoHideDistance; // C1
    uint8_t unkC2[0xC8 - 0xC2]; // C2
    CName lightName; // C8
    float autoHideDistance; // D0
    uint8_t unkD4[0xE0 - 0xD4]; // D4
};
RED4EXT_ASSERT_SIZE(AdvertisementLightData, 0xE0);
} // namespace world
using worldAdvertisementLightData = world::AdvertisementLightData;
} // namespace RED4ext

// clang-format on
