#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AINode_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIActionSelector_Record : game::data::AINode_Record
{
    static constexpr const char* NAME = "gamedataAIActionSelector_Record";
    static constexpr const char* ALIAS = "AIActionSelector_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIActionSelector_Record, 0x68);
} // namespace game::data
using AIActionSelector_Record = game::data::AIActionSelector_Record;
} // namespace RED4ext
