#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace game::smart
{
struct GunUISightParameters
{
    static constexpr const char* NAME = "gamesmartGunUISightParameters";
    static constexpr const char* ALIAS = "smartGunUISightParameters";

    Vector2 center; // 00
    Vector2 targetableRegionSize; // 08
    Vector2 reticleSize; // 10
};
RED4EXT_ASSERT_SIZE(GunUISightParameters, 0x18);
} // namespace game::smart
using gamesmartGunUISightParameters = game::smart::GunUISightParameters;
using smartGunUISightParameters = game::smart::GunUISightParameters;
} // namespace RED4ext

// clang-format on
