#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LightComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/ELightType.hpp>

namespace RED4ext
{
namespace vehicle { 
struct LightComponent : game::LightComponent
{
    static constexpr const char* NAME = "vehicleLightComponent";
    static constexpr const char* ALIAS = NAME;

    vehicle::ELightType lightType; // 2E0
    float highBeamPitchAngle; // 2E4
    float highBeamRadiusMultiplier; // 2E8
    float highBeamConeMultiplier; // 2EC
    Color emissiveColor; // 2F0
    bool allowSeparateEmissiveColor; // 2F4
    uint8_t unk2F5[0x320 - 0x2F5]; // 2F5
};
RED4EXT_ASSERT_SIZE(LightComponent, 0x320);
} // namespace vehicle
} // namespace RED4ext
