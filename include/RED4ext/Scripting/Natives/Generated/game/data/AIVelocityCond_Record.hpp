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
struct AIVelocityCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIVelocityCond_Record";
    static constexpr const char* ALIAS = "AIVelocityCond_Record";

    uint8_t unk58[0x80 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIVelocityCond_Record, 0x80);
} // namespace game::data
using gamedataAIVelocityCond_Record = game::data::AIVelocityCond_Record;
using AIVelocityCond_Record = game::data::AIVelocityCond_Record;
} // namespace RED4ext

// clang-format on
