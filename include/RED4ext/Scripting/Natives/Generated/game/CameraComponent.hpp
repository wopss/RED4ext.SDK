#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/BaseCameraComponent.hpp>

namespace RED4ext
{
namespace game { 
struct CameraComponent : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "gameCameraComponent";
    static constexpr const char* ALIAS = "CameraComponent";

    uint8_t unk1D0[0x1D8 - 0x1D0]; // 1D0
    CName animParamFovOverrideWeight; // 1D8
    CName animParamFovOverrideValue; // 1E0
    CName animParamZoomOverrideWeight; // 1E8
    CName animParamZoomOverrideValue; // 1F0
    CName animParamZoomWeaponOverrideWeight; // 1F8
    CName animParamZoomWeaponOverrideValue; // 200
    CName animParamdofIntensity; // 208
    CName animParamdofNearBlur; // 210
    CName animParamdofNearFocus; // 218
    CName animParamdofFarBlur; // 220
    CName animParamdofFarFocus; // 228
    CName animParamWeaponNearPlaneCM; // 230
    CName animParamWeaponFarPlaneCM; // 238
    CName animParamWeaponEdgesSharpness; // 240
    CName animParamWeaponVignetteIntensity; // 248
    CName animParamWeaponVignetteRadius; // 250
    CName animParamWeaponVignetteCircular; // 258
    CName animParamWeaponBlurIntensity; // 260
    float fovOverrideWeight; // 268
    float fovOverrideValue; // 26C
    float zoomOverrideWeight; // 270
    float zoomOverrideValue; // 274
    float zoomWeaponOverrideWeight; // 278
    float zoomWeaponOverrideValue; // 27C
    uint8_t unk280[0x2A0 - 0x280]; // 280
};
RED4EXT_ASSERT_SIZE(CameraComponent, 0x2A0);
} // namespace game
using CameraComponent = game::CameraComponent;
} // namespace RED4ext
