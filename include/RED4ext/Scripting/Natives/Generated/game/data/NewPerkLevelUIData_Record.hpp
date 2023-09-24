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
struct NewPerkLevelUIData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataNewPerkLevelUIData_Record";
    static constexpr const char* ALIAS = "NewPerkLevelUIData_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(NewPerkLevelUIData_Record, 0x70);
} // namespace game::data
using gamedataNewPerkLevelUIData_Record = game::data::NewPerkLevelUIData_Record;
using NewPerkLevelUIData_Record = game::data::NewPerkLevelUIData_Record;
} // namespace RED4ext

// clang-format on
