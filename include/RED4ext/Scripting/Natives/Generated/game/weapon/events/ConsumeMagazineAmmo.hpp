#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::weapon::events
{
struct ConsumeMagazineAmmo : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsConsumeMagazineAmmo";
    static constexpr const char* ALIAS = "WeaponConsumeMagazineAmmoEvent";

    uint16_t amount; // 40
    uint8_t unk42[0x48 - 0x42]; // 42
};
RED4EXT_ASSERT_SIZE(ConsumeMagazineAmmo, 0x48);
} // namespace game::weapon::events
using gameweaponeventsConsumeMagazineAmmo = game::weapon::events::ConsumeMagazineAmmo;
using WeaponConsumeMagazineAmmoEvent = game::weapon::events::ConsumeMagazineAmmo;
} // namespace RED4ext

// clang-format on
