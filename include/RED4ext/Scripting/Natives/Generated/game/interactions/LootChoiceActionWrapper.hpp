#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct LootChoiceActionWrapper
{
    static constexpr const char* NAME = "gameinteractionsLootChoiceActionWrapper";
    static constexpr const char* ALIAS = "LootChoiceActionWrapper";

    uint8_t unk00[0x1 - 0x0]; // 0
    bool removeItem; // 01
    uint8_t unk02[0x4 - 0x2]; // 2
    ItemID itemId; // 04
    uint8_t unk14[0x18 - 0x14]; // 14
    CName action; // 18
    uint8_t unk20[0x30 - 0x20]; // 20
};
RED4EXT_ASSERT_SIZE(LootChoiceActionWrapper, 0x30);
} // namespace game::interactions
using gameinteractionsLootChoiceActionWrapper = game::interactions::LootChoiceActionWrapper;
using LootChoiceActionWrapper = game::interactions::LootChoiceActionWrapper;
} // namespace RED4ext

// clang-format on
