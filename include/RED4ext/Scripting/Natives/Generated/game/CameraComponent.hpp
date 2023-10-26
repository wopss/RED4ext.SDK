#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/BaseCameraComponent.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) CameraComponent : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "gameCameraComponent";
    static constexpr const char* ALIAS = "CameraComponent";

    uint8_t unk1E0[0x1E8 - 0x1E0]; // 1E0
    CName animParamFovOverrideWeight; // 1E8
    CName animParamFovOverrideValue; // 1F0
    CName animParamZoomOverrideWeight; // 1F8
    CName animParamZoomOverrideValue; // 200
    CName animParamZoomWeaponOverrideWeight; // 208
    CName animParamZoomWeaponOverrideValue; // 210
    CName animParamdofIntensity; // 218
    CName animParamdofNearBlur; // 220
    CName animParamdofNearFocus; // 228
    CName animParamdofFarBlur; // 230
    CName animParamdofFarFocus; // 238
    CName animParamWeaponNearPlaneCM; // 240
    CName animParamWeaponFarPlaneCM; // 248
    CName animParamWeaponEdgesSharpness; // 250
    CName animParamWeaponVignetteIntensity; // 258
    CName animParamWeaponVignetteRadius; // 260
    CName animParamWeaponVignetteCircular; // 268
    CName animParamWeaponBlurIntensity; // 270
    float zoomOverrideWeight; // 278
    float zoomOverrideValue; // 27C
    float zoomWeaponOverrideWeight; // 280
    float zoomWeaponOverrideValue; // 284
    uint8_t unk288[0x2AC - 0x288]; // 288
    float fovOverrideWeight; // 2AC
    float fovOverrideValue; // 2B0
    uint8_t unk2B4[0x320 - 0x2B4]; // 2B4
};
RED4EXT_ASSERT_SIZE(CameraComponent, 0x320);
} // namespace game
using gameCameraComponent = game::CameraComponent;
using CameraComponent = game::CameraComponent;
} // namespace RED4ext

// clang-format on
