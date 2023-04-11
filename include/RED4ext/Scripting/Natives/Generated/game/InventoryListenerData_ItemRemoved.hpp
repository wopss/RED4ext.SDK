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
struct InventoryListenerData_ItemRemoved : game::InventoryListenerData_Base
{
    static constexpr const char* NAME = "gameInventoryListenerData_ItemRemoved";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x50 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(InventoryListenerData_ItemRemoved, 0x50);
} // namespace game
using gameInventoryListenerData_ItemRemoved = game::InventoryListenerData_ItemRemoved;
} // namespace RED4ext

// clang-format on
