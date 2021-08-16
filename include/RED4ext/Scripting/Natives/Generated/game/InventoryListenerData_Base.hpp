#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct InventoryListenerData_Base
{
    static constexpr const char* NAME = "gameInventoryListenerData_Base";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x38 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(InventoryListenerData_Base, 0x38);
} // namespace game
} // namespace RED4ext
