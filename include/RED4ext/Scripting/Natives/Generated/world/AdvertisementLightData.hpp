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
#include <RED4ext/Scripting/Natives/Generated/rend/EPathTracingLightUsage.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightAttenuation.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/RayTracedShadowsPlatform.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/SLightFlickering.hpp>

namespace RED4ext
{
struct CIESDataResource;

namespace world
{
struct __declspec(align(0x10)) AdvertisementLightData
{
    static constexpr const char* NAME = "worldAdvertisementLightData";
    static constexpr const char* ALIAS = NAME;

    Color color; // 00
    float temperature; // 04
    float radius; // 08
    ELightUnit unit; // 0C
    float intensity; // 10
    float EV; // 14
    ELightType type; // 18
    uint8_t scaleGI; // 1C
    uint8_t scaleEnvProbes; // 1D
    uint8_t sceneSpecularScale; // 1E
    uint8_t scaleVolFog; // 1F
    int8_t roughnessBias; // 20
    bool useInTransparents; // 21
    bool useInParticles; // 22
    bool sceneDiffuse; // 23
    bool directional; // 24
    bool clampAttenuation; // 25
    rend::LightChannel lightChannel; // 26
    rend::LightGroup group; // 28
    rend::LightAttenuation attenuation; // 29
    bool enableLocalShadows; // 2A
    bool enableLocalShadowsForceStaticsOnly; // 2B
    rend::ContactShadowReciever contactShadows; // 2C
    uint8_t unk2D[0x30 - 0x2D]; // 2D
    float shadowFadeDistance; // 30
    float shadowFadeRange; // 34
    ELightShadowSoftnessMode shadowSoftnessMode; // 38
    rend::RayTracedShadowsPlatform rayTracedShadowsPlatform; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
    float rayTracingLightSourceRadius; // 40
    float rayTracingContactShadowRange; // 44
    rend::SLightFlickering flicker; // 48
    EEnvColorGroup envColorGroup; // 54
    uint8_t colorGroupSaturation; // 55
    uint8_t portalAngleCutoff; // 56
    bool allowDistantLight; // 57
    rend::EPathTracingLightUsage pathTracingLightUsage; // 58
    bool pathTracingOverrideScaleGI; // 59
    uint8_t unk5A[0x5C - 0x5A]; // 5A
    float rayTracingIntensityScale; // 5C
    float rtxdiShadowStartingDistance; // 60
    float innerAngle; // 64
    float outerAngle; // 68
    float shadowAngle; // 6C
    float shadowRadius; // 70
    float softness; // 74
    EAreaLightShape areaShape; // 78
    bool areaTwoSided; // 7C
    bool spotCapsule; // 7D
    uint8_t unk7E[0x80 - 0x7E]; // 7E
    float sourceRadius; // 80
    float capsuleLength; // 84
    float areaRectSideA; // 88
    float areaRectSideB; // 8C
    RaRef<CIESDataResource> iesProfile; // 90
    uint8_t unk98[0xA0 - 0x98]; // 98
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
