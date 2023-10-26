#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LightComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/ELightType.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) LightComponent : game::LightComponent
{
    static constexpr const char* NAME = "vehicleLightComponent";
    static constexpr const char* ALIAS = NAME;

    vehicle::ELightType lightType; // 310
    float highBeamPitchAngle; // 314
    float highBeamRadiusMultiplier; // 318
    float highBeamConeMultiplier; // 31C
    Color emissiveColor; // 320
    bool allowSeparateEmissiveColor; // 324
    uint8_t unk325[0x350 - 0x325]; // 325
};
RED4EXT_ASSERT_SIZE(LightComponent, 0x350);
} // namespace vehicle
using vehicleLightComponent = vehicle::LightComponent;
} // namespace RED4ext

// clang-format on
