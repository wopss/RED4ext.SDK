#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemObject.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/GrenadeDeliveryMethodType.hpp>

namespace RED4ext
{
namespace game::weapon
{
struct __declspec(align(0x10)) Grenade : game::ItemObject
{
    static constexpr const char* NAME = "gameweaponGrenade";
    static constexpr const char* ALIAS = "WeaponGrenade";

    Vector4 lastHitNormal; // 2D0
    uint8_t unk2E0[0x2F0 - 0x2E0]; // 2E0
    game::data::GrenadeDeliveryMethodType deliveryMethod; // 2F0
    uint8_t unk2F4[0x300 - 0x2F4]; // 2F4
};
RED4EXT_ASSERT_SIZE(Grenade, 0x300);
} // namespace game::weapon
using gameweaponGrenade = game::weapon::Grenade;
using WeaponGrenade = game::weapon::Grenade;
} // namespace RED4ext

// clang-format on
