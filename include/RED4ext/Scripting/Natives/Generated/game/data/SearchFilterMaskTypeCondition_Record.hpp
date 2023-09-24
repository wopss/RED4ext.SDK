#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct SearchFilterMaskTypeCondition_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataSearchFilterMaskTypeCondition_Record";
    static constexpr const char* ALIAS = "SearchFilterMaskTypeCondition_Record";

};
RED4EXT_ASSERT_SIZE(SearchFilterMaskTypeCondition_Record, 0x48);
} // namespace game::data
using gamedataSearchFilterMaskTypeCondition_Record = game::data::SearchFilterMaskTypeCondition_Record;
using SearchFilterMaskTypeCondition_Record = game::data::SearchFilterMaskTypeCondition_Record;
} // namespace RED4ext

// clang-format on
