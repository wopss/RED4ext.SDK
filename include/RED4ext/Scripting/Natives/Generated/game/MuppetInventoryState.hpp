#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetInventorySlotInfo.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetInventoryState
{
    static constexpr const char* NAME = "gameMuppetInventoryState";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::MuppetInventorySlotInfo> slots; // 00
    int32_t activeSlot; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(MuppetInventoryState, 0x18);
} // namespace game
using gameMuppetInventoryState = game::MuppetInventoryState;
} // namespace RED4ext

// clang-format on
