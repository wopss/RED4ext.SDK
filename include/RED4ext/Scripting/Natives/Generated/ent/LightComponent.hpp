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
#include <RED4ext/Scripting/Natives/Generated/rend/LightAttenuation.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/SLightFlickering.hpp>

namespace RED4ext
{
struct CIESDataResource;

namespace ent
{
struct LightComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entLightComponent";
    static constexpr const char* ALIAS = "LightComponent";

    Color color; // 140
    float temperature; // 144
    float radius; // 148
    ELightUnit unit; // 14C
    float intensity; // 150
    float rayTracingIntensityScale; // 154
    bool rtxdiOverrideGlobalRayOffset; // 158
    uint8_t unk159[0x15C - 0x159]; // 159
    float rtxdiRayOffsetMin; // 15C
    float rtxdiRayOffsetMax; // 160
    float rtxdiRayScale; // 164
    bool rtxdiEnableLight; // 168
    uint8_t unk169[0x16C - 0x169]; // 169
    float EV; // 16C
    ELightType type; // 170
    uint8_t scaleGI; // 174
    uint8_t scaleEnvProbes; // 175
    uint8_t sceneSpecularScale; // 176
    uint8_t scaleVolFog; // 177
    int8_t roughnessBias; // 178
    bool useInTransparents; // 179
    bool useInParticles; // 17A
    bool sceneDiffuse; // 17B
    bool directional; // 17C
    bool clampAttenuation; // 17D
    rend::LightChannel lightChannel; // 17E
    rend::LightGroup group; // 180
    rend::LightAttenuation attenuation; // 181
    bool enableLocalShadows; // 182
    bool enableLocalShadowsForceStaticsOnly; // 183
    rend::ContactShadowReciever contactShadows; // 184
    uint8_t unk185[0x188 - 0x185]; // 185
    float shadowFadeDistance; // 188
    float shadowFadeRange; // 18C
    ELightShadowSoftnessMode shadowSoftnessMode; // 190
    float rayTracingLightSourceRadius; // 194
    float rayTracingContactShadowRange; // 198
    rend::SLightFlickering flicker; // 19C
    EEnvColorGroup envColorGroup; // 1A8
    uint8_t colorGroupSaturation; // 1A9
    uint8_t portalAngleCutoff; // 1AA
    bool allowDistantLight; // 1AB
    float innerAngle; // 1AC
    float outerAngle; // 1B0
    float shadowAngle; // 1B4
    float shadowRadius; // 1B8
    float softness; // 1BC
    EAreaLightShape areaShape; // 1C0
    bool areaTwoSided; // 1C4
    bool spotCapsule; // 1C5
    uint8_t unk1C6[0x1C8 - 0x1C6]; // 1C6
    float sourceRadius; // 1C8
    float capsuleLength; // 1CC
    float areaRectSideA; // 1D0
    float areaRectSideB; // 1D4
    RaRef<CIESDataResource> iesProfile; // 1D8
    uint8_t unk1E0[0x200 - 0x1E0]; // 1E0
};
RED4EXT_ASSERT_SIZE(LightComponent, 0x200);
} // namespace ent
using entLightComponent = ent::LightComponent;
using LightComponent = ent::LightComponent;
} // namespace RED4ext

// clang-format on
