#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ItemObject.hpp>

namespace RED4ext
{
namespace game::weapon { 
struct Grenade : game::ItemObject
{
    static constexpr const char* NAME = "gameweaponGrenade";
    static constexpr const char* ALIAS = "WeaponGrenade";

    uint8_t unk318[0x330 - 0x318]; // 318
};
RED4EXT_ASSERT_SIZE(Grenade, 0x330);
} // namespace game::weapon
using WeaponGrenade = game::weapon::Grenade;
} // namespace RED4ext
