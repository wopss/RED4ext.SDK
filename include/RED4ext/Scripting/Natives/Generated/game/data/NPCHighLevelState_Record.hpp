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
struct NPCHighLevelState_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataNPCHighLevelState_Record";
    static constexpr const char* ALIAS = "NPCHighLevelState_Record";

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(NPCHighLevelState_Record, 0x68);
} // namespace game::data
using gamedataNPCHighLevelState_Record = game::data::NPCHighLevelState_Record;
using NPCHighLevelState_Record = game::data::NPCHighLevelState_Record;
} // namespace RED4ext

// clang-format on
