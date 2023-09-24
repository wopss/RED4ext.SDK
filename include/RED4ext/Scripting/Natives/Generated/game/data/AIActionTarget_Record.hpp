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
struct AIActionTarget_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAIActionTarget_Record";
    static constexpr const char* ALIAS = "AIActionTarget_Record";

    uint8_t unk48[0xB0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIActionTarget_Record, 0xB0);
} // namespace game::data
using gamedataAIActionTarget_Record = game::data::AIActionTarget_Record;
using AIActionTarget_Record = game::data::AIActionTarget_Record;
} // namespace RED4ext

// clang-format on
