#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AINode_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIActionSequence_Record : game::data::AINode_Record
{
    static constexpr const char* NAME = "gamedataAIActionSequence_Record";
    static constexpr const char* ALIAS = "AIActionSequence_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIActionSequence_Record, 0x68);
} // namespace game::data
using AIActionSequence_Record = game::data::AIActionSequence_Record;
} // namespace RED4ext
