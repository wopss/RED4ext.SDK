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
struct AIActionPhase_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAIActionPhase_Record";
    static constexpr const char* ALIAS = "AIActionPhase_Record";

    uint8_t unk48[0x100 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIActionPhase_Record, 0x100);
} // namespace game::data
using gamedataAIActionPhase_Record = game::data::AIActionPhase_Record;
using AIActionPhase_Record = game::data::AIActionPhase_Record;
} // namespace RED4ext

// clang-format on
