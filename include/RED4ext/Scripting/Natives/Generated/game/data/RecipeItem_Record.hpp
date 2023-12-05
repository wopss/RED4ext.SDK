#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Item_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct RecipeItem_Record : game::data::Item_Record
{
    static constexpr const char* NAME = "gamedataRecipeItem_Record";
    static constexpr const char* ALIAS = "RecipeItem_Record";

    uint8_t unk478[0x488 - 0x478]; // 478
};
RED4EXT_ASSERT_SIZE(RecipeItem_Record, 0x488);
} // namespace game::data
using gamedataRecipeItem_Record = game::data::RecipeItem_Record;
using RecipeItem_Record = game::data::RecipeItem_Record;
} // namespace RED4ext

// clang-format on
