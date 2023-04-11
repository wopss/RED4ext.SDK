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
struct InventoryListenerData_InventoryEmpty : game::InventoryListenerData_Base
{
    static constexpr const char* NAME = "gameInventoryListenerData_InventoryEmpty";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(InventoryListenerData_InventoryEmpty, 0x38);
} // namespace game
using gameInventoryListenerData_InventoryEmpty = game::InventoryListenerData_InventoryEmpty;
} // namespace RED4ext

// clang-format on
