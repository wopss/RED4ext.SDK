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
    bool useInTransparents; // 160
    bool useInParticles; // 161
    bool sceneDiffuse; // 162
    bool directional; // 163
    bool clampAttenuation; // 164
    uint8_t scaleGI; // 165
    uint8_t scaleEnvProbes; // 166
    uint8_t sceneSpecularScale; // 167
    uint8_t scaleVolFog; // 168
    int8_t roughnessBias; // 169
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
    rend::SLightFlickering flicker; // 180
    EEnvColorGroup envColorGroup; // 18C
    uint8_t colorGroupSaturation; // 18D
    uint8_t portalAngleCutoff; // 18E
    bool allowDistantLight; // 18F
    float innerAngle; // 190
    float outerAngle; // 194
    float shadowAngle; // 198
    float shadowRadius; // 19C
    float softness; // 1A0
    EAreaLightShape areaShape; // 1A4
    bool areaTwoSided; // 1A8
    bool spotCapsule; // 1A9
    uint8_t unk1AA[0x1AC - 0x1AA]; // 1AA
    float sourceRadius; // 1AC
    float capsuleLength; // 1B0
    float areaRectSideA; // 1B4
    float areaRectSideB; // 1B8
    uint8_t unk1BC[0x1C0 - 0x1BC]; // 1BC
    RaRef<CIESDataResource> iesProfile; // 1C0
    uint8_t unk1C8[0x1F0 - 0x1C8]; // 1C8
};
RED4EXT_ASSERT_SIZE(LightComponent, 0x1F0);
} // namespace ent
using LightComponent = ent::LightComponent;
} // namespace RED4ext
