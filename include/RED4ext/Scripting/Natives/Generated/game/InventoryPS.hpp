#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>

namespace RED4ext
{
namespace game { 
struct InventoryPS : game::ComponentPS
{
    static constexpr const char* NAME = "gameInventoryPS";
    static constexpr const char* ALIAS = NAME;

    bool isRegisteredShared; // 68
    bool accessible; // 69
    uint8_t unk6A[0x70 - 0x6A]; // 6A
};
RED4EXT_ASSERT_SIZE(InventoryPS, 0x70);
} // namespace game
} // namespace RED4ext
