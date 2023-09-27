#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AIExtendTargetCirclingCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIExtendTargetCirclingCond_Record";
    static constexpr const char* ALIAS = "AIExtendTargetCirclingCond_Record";

    uint8_t unk58[0x80 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIExtendTargetCirclingCond_Record, 0x80);
} // namespace game::data
using gamedataAIExtendTargetCirclingCond_Record = game::data::AIExtendTargetCirclingCond_Record;
using AIExtendTargetCirclingCond_Record = game::data::AIExtendTargetCirclingCond_Record;
} // namespace RED4ext

// clang-format on
