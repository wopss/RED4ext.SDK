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
struct AISubAction_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAISubAction_Record";
    static constexpr const char* ALIAS = "AISubAction_Record";

};
RED4EXT_ASSERT_SIZE(AISubAction_Record, 0x48);
} // namespace game::data
using gamedataAISubAction_Record = game::data::AISubAction_Record;
using AISubAction_Record = game::data::AISubAction_Record;
} // namespace RED4ext

// clang-format on
