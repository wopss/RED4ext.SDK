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
struct Base_MappinDefinition_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataBase_MappinDefinition_Record";
    static constexpr const char* ALIAS = "Base_MappinDefinition_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Base_MappinDefinition_Record, 0x78);
} // namespace game::data
using gamedataBase_MappinDefinition_Record = game::data::Base_MappinDefinition_Record;
using Base_MappinDefinition_Record = game::data::Base_MappinDefinition_Record;
} // namespace RED4ext

// clang-format on
