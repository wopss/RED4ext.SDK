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
    bool useInGI; // 160
    bool useInEnvProbes; // 161
    bool useInFog; // 162
    bool useInTransparents; // 163
    bool useInParticles; // 164
    bool sceneDiffuse; // 165
    bool sceneSpecular; // 166
    bool directional; // 167
    bool clampAttenuation; // 168
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
    uint8_t unk1BC[0x1C8 - 0x1BC]; // 1BC
    RaRef<CIESDataResource> iesProfile; // 1C8
    uint8_t unk1D0[0x200 - 0x1D0]; // 1D0
};
RED4EXT_ASSERT_SIZE(LightComponent, 0x200);
} // namespace ent
using LightComponent = ent::LightComponent;
} // namespace RED4ext
