#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game { 
struct InventoryItemSortData
{
    static constexpr const char* NAME = "gameInventoryItemSortData";
    static constexpr const char* ALIAS = "InventoryItemSortData";

    CString Name; // 00
    int32_t Quality; // 20
    int32_t Price; // 24
    float Weight; // 28
    int32_t DPS; // 2C
    int32_t ItemType; // 30
    bool QuestItem; // 34
    bool NewItem; // 35
    bool DLCAddedItem; // 36
    uint8_t unk37[0x38 - 0x37]; // 37
};
RED4EXT_ASSERT_SIZE(InventoryItemSortData, 0x38);
} // namespace game
using InventoryItemSortData = game::InventoryItemSortData;
} // namespace RED4ext
