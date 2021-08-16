#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AIIsInActiveCameraCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIIsInActiveCameraCond_Record";
    static constexpr const char* ALIAS = "AIIsInActiveCameraCond_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AIIsInActiveCameraCond_Record, 0x60);
} // namespace game::data
using AIIsInActiveCameraCond_Record = game::data::AIIsInActiveCameraCond_Record;
} // namespace RED4ext
