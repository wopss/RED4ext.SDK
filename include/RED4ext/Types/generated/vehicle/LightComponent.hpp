#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/Color.hpp>
#include <RED4ext/Types/generated/game/LightComponent.hpp>
#include <RED4ext/Types/generated/vehicle/ELightType.hpp>

namespace RED4ext
{
namespace vehicle { 
struct LightComponent : game::LightComponent
{
    static constexpr const char* NAME = "vehicleLightComponent";
    static constexpr const char* ALIAS = NAME;

    vehicle::ELightType lightType; // 2F0
    float highBeamPitchAngle; // 2F4
    float highBeamRadiusMultiplier; // 2F8
    float highBeamConeMultiplier; // 2FC
    Color emissiveColor; // 300
    bool allowSeparateEmissiveColor; // 304
    uint8_t unk305[0x330 - 0x305]; // 305
};
RED4EXT_ASSERT_SIZE(LightComponent, 0x330);
} // namespace vehicle
} // namespace RED4ext
