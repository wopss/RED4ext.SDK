#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/SWeaponPlaneParams.hpp>
#include <RED4ext/Types/generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct BaseCameraComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entBaseCameraComponent";
    static constexpr const char* ALIAS = "entCameraComponent";

    uint8_t unk120[0x128 - 0x120]; // 120
    float fov; // 128
    uint8_t unk12C[0x144 - 0x12C]; // 12C
    float zoom; // 144
    uint8_t unk148[0x14C - 0x148]; // 148
    float nearPlaneOverride; // 14C
    float farPlaneOverride; // 150
    float motionBlurScale; // 154
    uint8_t unk158[0x15C - 0x158]; // 158
    SWeaponPlaneParams weaponPlane; // 15C
    uint8_t unk178[0x1C0 - 0x178]; // 178
};
RED4EXT_ASSERT_SIZE(BaseCameraComponent, 0x1C0);
} // namespace ent
using entCameraComponent = ent::BaseCameraComponent;
} // namespace RED4ext
