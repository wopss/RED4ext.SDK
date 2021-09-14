#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/SWeaponPlaneParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct BaseCameraComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entBaseCameraComponent";
    static constexpr const char* ALIAS = "entCameraComponent";

    uint8_t unk120[0x128 - 0x120]; // 120
    float fov; // 128
    uint8_t unk12C[0x15C - 0x12C]; // 12C
    float zoom; // 15C
    uint8_t unk160[0x164 - 0x160]; // 160
    float nearPlaneOverride; // 164
    float farPlaneOverride; // 168
    float motionBlurScale; // 16C
    uint8_t unk170[0x174 - 0x170]; // 170
    SWeaponPlaneParams weaponPlane; // 174
    uint8_t unk190[0x1D0 - 0x190]; // 190
};
RED4EXT_ASSERT_SIZE(BaseCameraComponent, 0x1D0);
} // namespace ent
using entCameraComponent = ent::BaseCameraComponent;
} // namespace RED4ext
