#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TriggerMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/WeaponEvolution.hpp>

namespace RED4ext
{
namespace game
{
struct SlotWeaponData
{
    static constexpr const char* NAME = "gameSlotWeaponData";
    static constexpr const char* ALIAS = "SlotWeaponData";

    ItemID weaponID; // 00
    int32_t ammoCurrent; // 10
    int32_t magazineCap; // 14
    ItemID ammoId; // 18
    game::data::TriggerMode triggerModeCurrent; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
    DynArray<game::data::TriggerMode> triggerModeList; // 30
    game::data::WeaponEvolution evolution; // 40
    bool isActive; // 44
    bool isFirstEquip; // 45
    uint8_t unk46[0x48 - 0x46]; // 46
};
RED4EXT_ASSERT_SIZE(SlotWeaponData, 0x48);
} // namespace game
using gameSlotWeaponData = game::SlotWeaponData;
using SlotWeaponData = game::SlotWeaponData;
} // namespace RED4ext

// clang-format on
