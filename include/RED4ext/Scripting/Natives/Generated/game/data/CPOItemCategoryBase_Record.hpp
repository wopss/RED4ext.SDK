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
struct CPOItemCategoryBase_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataCPOItemCategoryBase_Record";
    static constexpr const char* ALIAS = "CPOItemCategoryBase_Record";

};
RED4EXT_ASSERT_SIZE(CPOItemCategoryBase_Record, 0x48);
} // namespace game::data
using gamedataCPOItemCategoryBase_Record = game::data::CPOItemCategoryBase_Record;
using CPOItemCategoryBase_Record = game::data::CPOItemCategoryBase_Record;
} // namespace RED4ext

// clang-format on
