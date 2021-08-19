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
    static constexpr const char* ALIAS = NAME;

    uint8_t unk328[0x330 - 0x328]; // 328
    Vector4 lastHitNormal; // 330
    uint8_t unk340[0x350 - 0x340]; // 340
    game::data::GrenadeDeliveryMethodType deliveryMethod; // 350
    uint8_t unk354[0x360 - 0x354]; // 354
};
RED4EXT_ASSERT_SIZE(Grenade, 0x360);
} // namespace game::weapon
} // namespace RED4ext
