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
struct NewPerkLevelData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataNewPerkLevelData_Record";
    static constexpr const char* ALIAS = "NewPerkLevelData_Record";

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(NewPerkLevelData_Record, 0x88);
} // namespace game::data
using gamedataNewPerkLevelData_Record = game::data::NewPerkLevelData_Record;
using NewPerkLevelData_Record = game::data::NewPerkLevelData_Record;
} // namespace RED4ext

// clang-format on
