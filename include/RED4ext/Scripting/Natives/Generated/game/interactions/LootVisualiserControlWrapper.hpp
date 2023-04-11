#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct LootVisualiserControlWrapper
{
    static constexpr const char* NAME = "gameinteractionsLootVisualiserControlWrapper";
    static constexpr const char* ALIAS = "LootVisualiserControlWrapper";

    uint8_t unk00[0x18 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(LootVisualiserControlWrapper, 0x18);
} // namespace game::interactions
using gameinteractionsLootVisualiserControlWrapper = game::interactions::LootVisualiserControlWrapper;
using LootVisualiserControlWrapper = game::interactions::LootVisualiserControlWrapper;
} // namespace RED4ext

// clang-format on
