#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemObject.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/GrenadeDeliveryMethodType.hpp>

namespace RED4ext
{
namespace game::weapon { 
struct Grenade : game::ItemObject
{
    static constexpr const char* NAME = "gameweaponGrenade";
    static constexpr const char* ALIAS = "WeaponGrenade";

    Vector4 lastHitNormal; // 2C0
    uint8_t unk2D0[0x2E0 - 0x2D0]; // 2D0
    game::data::GrenadeDeliveryMethodType deliveryMethod; // 2E0
    uint8_t unk2E4[0x2F0 - 0x2E4]; // 2E4
};
RED4EXT_ASSERT_SIZE(Grenade, 0x2F0);
} // namespace game::weapon
using WeaponGrenade = game::weapon::Grenade;
} // namespace RED4ext
