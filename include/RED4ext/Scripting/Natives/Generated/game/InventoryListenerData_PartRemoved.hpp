#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/InventoryListenerData_Base.hpp>

namespace RED4ext
{
namespace game
{
struct InventoryListenerData_PartRemoved : game::InventoryListenerData_Base
{
    static constexpr const char* NAME = "gameInventoryListenerData_PartRemoved";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x58 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(InventoryListenerData_PartRemoved, 0x58);
} // namespace game
using gameInventoryListenerData_PartRemoved = game::InventoryListenerData_PartRemoved;
} // namespace RED4ext

// clang-format on
