#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ESlotState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/InnerItemData.hpp>

namespace RED4ext
{
namespace game
{
struct SPartSlots
{
    static constexpr const char* NAME = "gameSPartSlots";
    static constexpr const char* ALIAS = "SPartSlots";

    game::ESlotState status; // 00
    ItemID installedPart; // 04
    TweakDBID slotID; // 14
    uint8_t unk1C[0x20 - 0x1C]; // 1C
    game::InnerItemData innerItemData; // 20
};
RED4EXT_ASSERT_SIZE(SPartSlots, 0x70);
} // namespace game
using gameSPartSlots = game::SPartSlots;
using SPartSlots = game::SPartSlots;
} // namespace RED4ext

// clang-format on
