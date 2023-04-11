#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/InteractionChoiceData.hpp>

namespace RED4ext
{
namespace game::interactions::vis
{
struct LootData
{
    static constexpr const char* NAME = "gameinteractionsvisLootData";
    static constexpr const char* ALIAS = "LootData";

    uint8_t unk00[0x4 - 0x0]; // 0
    bool isActive; // 04
    bool isListOpen; // 05
    bool e3hack_isWeapon; // 06
    uint8_t unk07[0x8 - 0x7]; // 7
    int32_t currentIndex; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    CString title; // 10
    ent::EntityID ownerId; // 30
    bool isLocked; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    DynArray<game::interactions::vis::InteractionChoiceData> choices; // 40
    DynArray<ItemID> itemIDs; // 50
};
RED4EXT_ASSERT_SIZE(LootData, 0x60);
} // namespace game::interactions::vis
using gameinteractionsvisLootData = game::interactions::vis::LootData;
using LootData = game::interactions::vis::LootData;
} // namespace RED4ext

// clang-format on
