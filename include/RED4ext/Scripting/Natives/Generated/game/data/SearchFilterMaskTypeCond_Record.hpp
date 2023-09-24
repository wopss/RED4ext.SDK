#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SearchFilterMaskTypeCondition_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct SearchFilterMaskTypeCond_Record : game::data::SearchFilterMaskTypeCondition_Record
{
    static constexpr const char* NAME = "gamedataSearchFilterMaskTypeCond_Record";
    static constexpr const char* ALIAS = "SearchFilterMaskTypeCond_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SearchFilterMaskTypeCond_Record, 0x60);
} // namespace game::data
using gamedataSearchFilterMaskTypeCond_Record = game::data::SearchFilterMaskTypeCond_Record;
using SearchFilterMaskTypeCond_Record = game::data::SearchFilterMaskTypeCond_Record;
} // namespace RED4ext

// clang-format on
