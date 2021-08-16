#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIAmmoCountCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIAmmoCountCond_Record";
    static constexpr const char* ALIAS = "AIAmmoCountCond_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AIAmmoCountCond_Record, 0x60);
} // namespace game::data
using AIAmmoCountCond_Record = game::data::AIAmmoCountCond_Record;
} // namespace RED4ext
