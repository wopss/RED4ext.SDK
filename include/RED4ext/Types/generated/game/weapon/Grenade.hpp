#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ItemObject.hpp>

namespace RED4ext
{
namespace game::weapon { 
struct Grenade : game::ItemObject
{
    static constexpr const char* NAME = "gameweaponGrenade";
    static constexpr const char* ALIAS = "WeaponGrenade";

    uint8_t unk310[0x328 - 0x310]; // 310
};
RED4EXT_ASSERT_SIZE(Grenade, 0x328);
} // namespace game::weapon
using WeaponGrenade = game::weapon::Grenade;
} // namespace RED4ext
