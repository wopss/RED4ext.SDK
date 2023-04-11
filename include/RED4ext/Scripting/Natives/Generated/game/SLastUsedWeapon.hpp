#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct SLastUsedWeapon
{
    static constexpr const char* NAME = "gameSLastUsedWeapon";
    static constexpr const char* ALIAS = "SLastUsedWeapon";

    ItemID lastUsedWeapon; // 00
    ItemID lastUsedRanged; // 10
    ItemID lastUsedMelee; // 20
    ItemID lastUsedHeavy; // 30
};
RED4EXT_ASSERT_SIZE(SLastUsedWeapon, 0x40);
} // namespace game
using gameSLastUsedWeapon = game::SLastUsedWeapon;
using SLastUsedWeapon = game::SLastUsedWeapon;
} // namespace RED4ext

// clang-format on
