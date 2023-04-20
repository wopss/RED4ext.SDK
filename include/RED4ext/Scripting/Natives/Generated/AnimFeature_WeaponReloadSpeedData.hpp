#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
struct AnimFeature_WeaponReloadSpeedData : anim::AnimFeature
{
    static constexpr const char* NAME = "AnimFeature_WeaponReloadSpeedData";
    static constexpr const char* ALIAS = NAME;

    float reloadSpeed; // 40
    float emptyReloadSpeed; // 44
};
RED4EXT_ASSERT_SIZE(AnimFeature_WeaponReloadSpeedData, 0x48);
} // namespace RED4ext

// clang-format on
