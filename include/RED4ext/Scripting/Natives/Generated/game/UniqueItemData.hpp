#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemData.hpp>

namespace RED4ext
{
namespace game { 
struct UniqueItemData : game::ItemData
{
    static constexpr const char* NAME = "gameUniqueItemData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xE8 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(UniqueItemData, 0xE8);
} // namespace game
} // namespace RED4ext
