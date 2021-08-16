#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/Item_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct RecipeItem_Record : game::data::Item_Record
{
    static constexpr const char* NAME = "gamedataRecipeItem_Record";
    static constexpr const char* ALIAS = "RecipeItem_Record";

    uint8_t unk130[0x138 - 0x130]; // 130
};
RED4EXT_ASSERT_SIZE(RecipeItem_Record, 0x138);
} // namespace game::data
using RecipeItem_Record = game::data::RecipeItem_Record;
} // namespace RED4ext
