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
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>
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

namespace ent
{
struct __declspec(align(0x10)) LightComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entLightComponent";
    static constexpr const char* ALIAS = "LightComponent";

    Color color; // 140
    float temperature; // 144
    float radius; // 148
    ELightUnit unit; // 14C
    float intensity; // 150
    float EV; // 154
    ELightType type; // 158
    uint8_t scaleGI; // 15C
    uint8_t scaleEnvProbes; // 15D
    uint8_t sceneSpecularScale; // 15E
    uint8_t scaleVolFog; // 15F
    int8_t roughnessBias; // 160
    bool useInTransparents; // 161
    bool useInParticles; // 162
    bool sceneDiffuse; // 163
    bool directional; // 164
    bool clampAttenuation; // 165
    rend::LightChannel lightChannel; // 166
    rend::LightGroup group; // 168
    rend::LightAttenuation attenuation; // 169
    bool enableLocalShadows; // 16A
    bool enableLocalShadowsForceStaticsOnly; // 16B
    rend::ContactShadowReciever contactShadows; // 16C
    uint8_t unk16D[0x170 - 0x16D]; // 16D
    float shadowFadeDistance; // 170
    float shadowFadeRange; // 174
    ELightShadowSoftnessMode shadowSoftnessMode; // 178
    rend::RayTracedShadowsPlatform rayTracedShadowsPlatform; // 17C
    uint8_t unk17D[0x180 - 0x17D]; // 17D
    float rayTracingLightSourceRadius; // 180
    float rayTracingContactShadowRange; // 184
    rend::SLightFlickering flicker; // 188
    EEnvColorGroup envColorGroup; // 194
    uint8_t colorGroupSaturation; // 195
    uint8_t portalAngleCutoff; // 196
    bool allowDistantLight; // 197
    rend::EPathTracingLightUsage pathTracingLightUsage; // 198
    bool pathTracingOverrideScaleGI; // 199
    uint8_t unk19A[0x19C - 0x19A]; // 19A
    float rayTracingIntensityScale; // 19C
    float rtxdiShadowStartingDistance; // 1A0
    float innerAngle; // 1A4
    float outerAngle; // 1A8
    float shadowAngle; // 1AC
    float shadowRadius; // 1B0
    float softness; // 1B4
    EAreaLightShape areaShape; // 1B8
    bool areaTwoSided; // 1BC
    bool spotCapsule; // 1BD
    uint8_t unk1BE[0x1C0 - 0x1BE]; // 1BE
    float sourceRadius; // 1C0
    float capsuleLength; // 1C4
    float areaRectSideA; // 1C8
    float areaRectSideB; // 1CC
    RaRef<CIESDataResource> iesProfile; // 1D0
    uint8_t unk1D8[0x200 - 0x1D8]; // 1D8
};
RED4EXT_ASSERT_SIZE(LightComponent, 0x200);
} // namespace ent
using entLightComponent = ent::LightComponent;
using LightComponent = ent::LightComponent;
} // namespace RED4ext

// clang-format on
