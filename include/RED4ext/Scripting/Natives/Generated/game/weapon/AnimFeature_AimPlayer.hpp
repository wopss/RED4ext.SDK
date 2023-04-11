#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature_BasicAim.hpp>

namespace RED4ext
{
namespace game::weapon
{
struct AnimFeature_AimPlayer : anim::AnimFeature_BasicAim
{
    static constexpr const char* NAME = "gameweaponAnimFeature_AimPlayer";
    static constexpr const char* ALIAS = "AnimFeature_AimPlayer";

    float zoomLevel; // 48
    float aimInTime; // 4C
    float aimOutTime; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(AnimFeature_AimPlayer, 0x58);
} // namespace game::weapon
using gameweaponAnimFeature_AimPlayer = game::weapon::AnimFeature_AimPlayer;
using AnimFeature_AimPlayer = game::weapon::AnimFeature_AimPlayer;
} // namespace RED4ext

// clang-format on
