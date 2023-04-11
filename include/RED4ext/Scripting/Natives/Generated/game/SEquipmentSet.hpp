#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EquipmentSetType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SItemInfo.hpp>

namespace RED4ext
{
namespace game
{
struct SEquipmentSet
{
    static constexpr const char* NAME = "gameSEquipmentSet";
    static constexpr const char* ALIAS = "SEquipmentSet";

    DynArray<game::SItemInfo> setItems; // 00
    CName setName; // 10
    game::EquipmentSetType setType; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(SEquipmentSet, 0x20);
} // namespace game
using gameSEquipmentSet = game::SEquipmentSet;
using SEquipmentSet = game::SEquipmentSet;
} // namespace RED4ext

// clang-format on
