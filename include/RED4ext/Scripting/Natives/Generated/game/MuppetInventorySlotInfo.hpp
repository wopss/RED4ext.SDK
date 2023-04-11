#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetInventorySlotInfo
{
    static constexpr const char* NAME = "gameMuppetInventorySlotInfo";
    static constexpr const char* ALIAS = NAME;

    TweakDBID itemCategory; // 00
    ItemID itemId; // 08
    uint32_t quantity; // 18
};
RED4EXT_ASSERT_SIZE(MuppetInventorySlotInfo, 0x1C);
} // namespace game
using gameMuppetInventorySlotInfo = game::MuppetInventorySlotInfo;
} // namespace RED4ext

// clang-format on
