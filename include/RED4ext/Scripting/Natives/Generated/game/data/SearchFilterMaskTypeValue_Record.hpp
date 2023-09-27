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
struct SearchFilterMaskTypeValue_Record : game::data::SearchFilterMaskTypeCondition_Record
{
    static constexpr const char* NAME = "gamedataSearchFilterMaskTypeValue_Record";
    static constexpr const char* ALIAS = "SearchFilterMaskTypeValue_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SearchFilterMaskTypeValue_Record, 0x60);
} // namespace game::data
using gamedataSearchFilterMaskTypeValue_Record = game::data::SearchFilterMaskTypeValue_Record;
using SearchFilterMaskTypeValue_Record = game::data::SearchFilterMaskTypeValue_Record;
} // namespace RED4ext

// clang-format on
