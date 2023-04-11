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
struct AIRecord_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAIRecord_Record";
    static constexpr const char* ALIAS = "AIRecord_Record";

};
RED4EXT_ASSERT_SIZE(AIRecord_Record, 0x48);
} // namespace game::data
using gamedataAIRecord_Record = game::data::AIRecord_Record;
using AIRecord_Record = game::data::AIRecord_Record;
} // namespace RED4ext

// clang-format on
