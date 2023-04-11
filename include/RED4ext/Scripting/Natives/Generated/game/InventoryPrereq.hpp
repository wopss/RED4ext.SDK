#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IComparisonPrereq.hpp>

namespace RED4ext
{
namespace game
{
struct InventoryPrereq : game::IComparisonPrereq
{
    static constexpr const char* NAME = "gameInventoryPrereq";
    static constexpr const char* ALIAS = "InventoryPrereq";

    ItemID itemID; // 48
    uint32_t amount; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(InventoryPrereq, 0x60);
} // namespace game
using gameInventoryPrereq = game::InventoryPrereq;
using InventoryPrereq = game::InventoryPrereq;
} // namespace RED4ext

// clang-format on
