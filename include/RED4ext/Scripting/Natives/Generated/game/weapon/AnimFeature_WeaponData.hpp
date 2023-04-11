#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace game::weapon
{
struct AnimFeature_WeaponData : anim::AnimFeature
{
    static constexpr const char* NAME = "gameweaponAnimFeature_WeaponData";
    static constexpr const char* ALIAS = "AnimFeature_WeaponData";

    float cycleTime; // 40
    float chargePercentage; // 44
    float timeInMaxCharge; // 48
    int32_t ammoRemaining; // 4C
    int32_t triggerMode; // 50
    bool isMagazineFull; // 54
    bool isTriggerDown; // 55
    uint8_t unk56[0x58 - 0x56]; // 56
};
RED4EXT_ASSERT_SIZE(AnimFeature_WeaponData, 0x58);
} // namespace game::weapon
using gameweaponAnimFeature_WeaponData = game::weapon::AnimFeature_WeaponData;
using AnimFeature_WeaponData = game::weapon::AnimFeature_WeaponData;
} // namespace RED4ext

// clang-format on
