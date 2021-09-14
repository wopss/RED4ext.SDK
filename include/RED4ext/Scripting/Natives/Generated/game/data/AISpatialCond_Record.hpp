#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISpatialCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAISpatialCond_Record";
    static constexpr const char* ALIAS = "AISpatialCond_Record";

    uint8_t unk50[0x70 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AISpatialCond_Record, 0x70);
} // namespace game::data
using AISpatialCond_Record = game::data::AISpatialCond_Record;
} // namespace RED4ext
