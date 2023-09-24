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
struct AIRole_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAIRole_Record";
    static constexpr const char* ALIAS = "AIRole_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIRole_Record, 0x70);
} // namespace game::data
using gamedataAIRole_Record = game::data::AIRole_Record;
using AIRole_Record = game::data::AIRole_Record;
} // namespace RED4ext

// clang-format on
