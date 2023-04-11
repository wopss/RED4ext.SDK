#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DamageType.hpp>

namespace RED4ext
{
namespace game::ui
{
struct WeaponRosterInfo
{
    static constexpr const char* NAME = "gameuiWeaponRosterInfo";
    static constexpr const char* ALIAS = "WeaponRosterInfo";

    int32_t ammoCurrent; // 00
    int32_t ammoMagazine; // 04
    int32_t ammoAvailable; // 08
    int32_t fireModeCurrent; // 0C
    DynArray<CName> fileModeList; // 10
    DynArray<game::data::DamageType> damageTypeList; // 20
    int32_t weaponId; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(WeaponRosterInfo, 0x38);
} // namespace game::ui
using gameuiWeaponRosterInfo = game::ui::WeaponRosterInfo;
using WeaponRosterInfo = game::ui::WeaponRosterInfo;
} // namespace RED4ext

// clang-format on
