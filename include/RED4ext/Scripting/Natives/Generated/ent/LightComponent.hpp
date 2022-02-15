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
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/ContactShadowReciever.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightAttenuation.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/LightGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/SLightFlickering.hpp>

namespace RED4ext
{
struct CIESDataResource;

namespace ent { 
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
    float EV; // 158
    ELightType type; // 15C
    uint8_t scaleGI; // 160
    uint8_t scaleEnvProbes; // 161
    uint8_t sceneSpecularScale; // 162
    uint8_t scaleVolFog; // 163
    int8_t roughnessBias; // 164
    bool useInTransparents; // 165
    bool useInParticles; // 166
    bool sceneDiffuse; // 167
    bool directional; // 168
    bool clampAttenuation; // 169
    rend::LightChannel lightChannel; // 16A
    rend::LightGroup group; // 16C
    rend::LightAttenuation attenuation; // 16D
    bool enableLocalShadows; // 16E
    bool enableLocalShadowsForceStaticsOnly; // 16F
    rend::ContactShadowReciever contactShadows; // 170
    uint8_t unk171[0x174 - 0x171]; // 171
    float shadowFadeDistance; // 174
    float shadowFadeRange; // 178
    ELightShadowSoftnessMode shadowSoftnessMode; // 17C
    float rayTracingLightSourceRadius; // 180
    float rayTracingContactShadowRange; // 184
    rend::SLightFlickering flicker; // 188
    EEnvColorGroup envColorGroup; // 194
    uint8_t colorGroupSaturation; // 195
    uint8_t portalAngleCutoff; // 196
    bool allowDistantLight; // 197
    float innerAngle; // 198
    float outerAngle; // 19C
    float shadowAngle; // 1A0
    float shadowRadius; // 1A4
    float softness; // 1A8
    EAreaLightShape areaShape; // 1AC
    bool areaTwoSided; // 1B0
    bool spotCapsule; // 1B1
    uint8_t unk1B2[0x1B4 - 0x1B2]; // 1B2
    float sourceRadius; // 1B4
    float capsuleLength; // 1B8
    float areaRectSideA; // 1BC
    float areaRectSideB; // 1C0
    uint8_t unk1C4[0x1C8 - 0x1C4]; // 1C4
    RaRef<CIESDataResource> iesProfile; // 1C8
    uint8_t unk1D0[0x1F0 - 0x1D0]; // 1D0
};
RED4EXT_ASSERT_SIZE(LightComponent, 0x1F0);
} // namespace ent
using LightComponent = ent::LightComponent;
} // namespace RED4ext
