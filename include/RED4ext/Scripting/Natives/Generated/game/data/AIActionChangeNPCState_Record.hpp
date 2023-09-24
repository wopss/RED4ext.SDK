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
struct AIActionChangeNPCState_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAIActionChangeNPCState_Record";
    static constexpr const char* ALIAS = "AIActionChangeNPCState_Record";

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIActionChangeNPCState_Record, 0x90);
} // namespace game::data
using gamedataAIActionChangeNPCState_Record = game::data::AIActionChangeNPCState_Record;
using AIActionChangeNPCState_Record = game::data::AIActionChangeNPCState_Record;
} // namespace RED4ext

// clang-format on
