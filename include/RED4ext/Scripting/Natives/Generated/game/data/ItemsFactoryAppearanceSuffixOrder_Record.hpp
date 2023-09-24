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
struct ItemsFactoryAppearanceSuffixOrder_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataItemsFactoryAppearanceSuffixOrder_Record";
    static constexpr const char* ALIAS = "ItemsFactoryAppearanceSuffixOrder_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ItemsFactoryAppearanceSuffixOrder_Record, 0x58);
} // namespace game::data
using gamedataItemsFactoryAppearanceSuffixOrder_Record = game::data::ItemsFactoryAppearanceSuffixOrder_Record;
using ItemsFactoryAppearanceSuffixOrder_Record = game::data::ItemsFactoryAppearanceSuffixOrder_Record;
} // namespace RED4ext

// clang-format on
