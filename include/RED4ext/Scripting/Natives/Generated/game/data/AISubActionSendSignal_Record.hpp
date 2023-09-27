#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISubActionSendSignal_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionSendSignal_Record";
    static constexpr const char* ALIAS = "AISubActionSendSignal_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionSendSignal_Record, 0x70);
} // namespace game::data
using gamedataAISubActionSendSignal_Record = game::data::AISubActionSendSignal_Record;
using AISubActionSendSignal_Record = game::data::AISubActionSendSignal_Record;
} // namespace RED4ext

// clang-format on
