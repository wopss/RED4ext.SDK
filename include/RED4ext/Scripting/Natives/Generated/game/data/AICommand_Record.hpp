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
struct AICommand_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAICommand_Record";
    static constexpr const char* ALIAS = "AICommand_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AICommand_Record, 0x60);
} // namespace game::data
using gamedataAICommand_Record = game::data::AICommand_Record;
using AICommand_Record = game::data::AICommand_Record;
} // namespace RED4ext

// clang-format on
