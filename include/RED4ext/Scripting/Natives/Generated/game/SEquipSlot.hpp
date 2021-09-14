#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game { 
struct SEquipSlot
{
    static constexpr const char* NAME = "gameSEquipSlot";
    static constexpr const char* ALIAS = "SEquipSlot";

    ItemID itemID; // 00
    bool isLocked; // 10
    uint8_t unk11[0x14 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(SEquipSlot, 0x14);
} // namespace game
using SEquipSlot = game::SEquipSlot;
} // namespace RED4ext
