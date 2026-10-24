#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ItemType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Quality.hpp>

namespace RED4ext
{
namespace game
{
struct TelemetryInventoryItem
{
    static constexpr const char* NAME = "gameTelemetryInventoryItem";
    static constexpr const char* ALIAS = "TelemetryInventoryItem";

    CString friendlyName; // 00
    CString localizedName; // 20
    CString leftHandWeapon; // 40
    CString rightHandWeapon; // 60
    ItemID itemID; // 80
    game::data::Quality quality; // 90
    game::data::ItemType itemType; // 94
    bool iconic; // 98
    uint8_t unk99[0x9C - 0x99]; // 99
    int32_t itemLevel; // 9C
    bool isSilenced; // A0
    uint8_t unkA1[0xB0 - 0xA1]; // A1
};
RED4EXT_ASSERT_SIZE(TelemetryInventoryItem, 0xB0);
} // namespace game
using gameTelemetryInventoryItem = game::TelemetryInventoryItem;
using TelemetryInventoryItem = game::TelemetryInventoryItem;
} // namespace RED4ext

// clang-format on
