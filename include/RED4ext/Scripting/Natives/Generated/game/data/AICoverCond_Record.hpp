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
struct AICoverCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAICoverCond_Record";
    static constexpr const char* ALIAS = "AICoverCond_Record";

    uint8_t unk58[0x118 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AICoverCond_Record, 0x118);
} // namespace game::data
using gamedataAICoverCond_Record = game::data::AICoverCond_Record;
using AICoverCond_Record = game::data::AICoverCond_Record;
} // namespace RED4ext

// clang-format on
