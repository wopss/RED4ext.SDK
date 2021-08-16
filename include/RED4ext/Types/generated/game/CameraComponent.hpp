#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/ent/BaseCameraComponent.hpp>

namespace RED4ext
{
namespace game { 
struct CameraComponent : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "gameCameraComponent";
    static constexpr const char* ALIAS = "CameraComponent";

    uint8_t unk1C0[0x1C8 - 0x1C0]; // 1C0
    CName animParamFovOverrideWeight; // 1C8
    CName animParamFovOverrideValue; // 1D0
    CName animParamZoomOverrideWeight; // 1D8
    CName animParamZoomOverrideValue; // 1E0
    CName animParamZoomWeaponOverrideWeight; // 1E8
    CName animParamZoomWeaponOverrideValue; // 1F0
    CName animParamdofIntensity; // 1F8
    CName animParamdofNearBlur; // 200
    CName animParamdofNearFocus; // 208
    CName animParamdofFarBlur; // 210
    CName animParamdofFarFocus; // 218
    CName animParamWeaponNearPlaneCM; // 220
    CName animParamWeaponFarPlaneCM; // 228
    CName animParamWeaponEdgesSharpness; // 230
    CName animParamWeaponVignetteIntensity; // 238
    CName animParamWeaponVignetteRadius; // 240
    CName animParamWeaponVignetteCircular; // 248
    CName animParamWeaponBlurIntensity; // 250
    float fovOverrideWeight; // 258
    float fovOverrideValue; // 25C
    float zoomOverrideWeight; // 260
    float zoomOverrideValue; // 264
    float zoomWeaponOverrideWeight; // 268
    float zoomWeaponOverrideValue; // 26C
    uint8_t unk270[0x290 - 0x270]; // 270
};
RED4EXT_ASSERT_SIZE(CameraComponent, 0x290);
} // namespace game
using CameraComponent = game::CameraComponent;
} // namespace RED4ext
