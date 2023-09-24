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
struct MappinUIFilterGroup_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataMappinUIFilterGroup_Record";
    static constexpr const char* ALIAS = "MappinUIFilterGroup_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MappinUIFilterGroup_Record, 0x78);
} // namespace game::data
using gamedataMappinUIFilterGroup_Record = game::data::MappinUIFilterGroup_Record;
using MappinUIFilterGroup_Record = game::data::MappinUIFilterGroup_Record;
} // namespace RED4ext

// clang-format on
