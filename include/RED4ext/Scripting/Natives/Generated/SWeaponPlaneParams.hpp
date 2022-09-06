#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct SWeaponPlaneParams
{
    static constexpr const char* NAME = "SWeaponPlaneParams";
    static constexpr const char* ALIAS = NAME;

    float weaponNearPlaneCM; // 00
    uint8_t unk04[0x18 - 0x4]; // 4
    float blurIntensity; // 18
};
RED4EXT_ASSERT_SIZE(SWeaponPlaneParams, 0x1C);
} // namespace RED4ext

// clang-format on
