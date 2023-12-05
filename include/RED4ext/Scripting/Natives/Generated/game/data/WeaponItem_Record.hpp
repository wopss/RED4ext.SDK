#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Item_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct WeaponItem_Record : game::data::Item_Record
{
    static constexpr const char* NAME = "gamedataWeaponItem_Record";
    static constexpr const char* ALIAS = "WeaponItem_Record";

    uint8_t unk478[0x5F8 - 0x478]; // 478
};
RED4EXT_ASSERT_SIZE(WeaponItem_Record, 0x5F8);
} // namespace game::data
using gamedataWeaponItem_Record = game::data::WeaponItem_Record;
using WeaponItem_Record = game::data::WeaponItem_Record;
} // namespace RED4ext

// clang-format on
