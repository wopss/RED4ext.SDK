#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemData.hpp>

namespace RED4ext
{
namespace game { 
struct BlueprintStackableItemData : game::ItemData
{
    static constexpr const char* NAME = "gameBlueprintStackableItemData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xF0 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(BlueprintStackableItemData, 0xF0);
} // namespace game
} // namespace RED4ext
