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
    ItemID itemID; // 40
    game::data::Quality quality; // 50
    game::data::ItemType itemType; // 54
    bool iconic; // 58
    uint8_t unk59[0x5C - 0x59]; // 59
    int32_t itemLevel; // 5C
    bool isSilenced; // 60
    uint8_t unk61[0x70 - 0x61]; // 61
};
RED4EXT_ASSERT_SIZE(TelemetryInventoryItem, 0x70);
} // namespace game
using gameTelemetryInventoryItem = game::TelemetryInventoryItem;
using TelemetryInventoryItem = game::TelemetryInventoryItem;
} // namespace RED4ext

// clang-format on
