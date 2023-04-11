#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatViewData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Quality.hpp>

namespace RED4ext
{
namespace game
{
struct ItemViewData
{
    static constexpr const char* NAME = "gameItemViewData";
    static constexpr const char* ALIAS = "ItemViewData";

    ItemID id; // 00
    CString itemName; // 10
    CString categoryName; // 30
    CString description; // 50
    CString quality; // 70
    float price; // 90
    bool isBroken; // 94
    uint8_t unk95[0x98 - 0x95]; // 95
    DynArray<game::StatViewData> primaryStats; // 98
    DynArray<game::StatViewData> secondaryStats; // A8
    game::data::Quality comparedQuality; // B8
    uint8_t unkBC[0xC0 - 0xBC]; // BC
};
RED4EXT_ASSERT_SIZE(ItemViewData, 0xC0);
} // namespace game
using gameItemViewData = game::ItemViewData;
using ItemViewData = game::ItemViewData;
} // namespace RED4ext

// clang-format on
