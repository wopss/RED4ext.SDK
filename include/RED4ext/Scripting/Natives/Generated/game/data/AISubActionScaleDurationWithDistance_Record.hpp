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
struct AISubActionScaleDurationWithDistance_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionScaleDurationWithDistance_Record";
    static constexpr const char* ALIAS = "AISubActionScaleDurationWithDistance_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionScaleDurationWithDistance_Record, 0x78);
} // namespace game::data
using gamedataAISubActionScaleDurationWithDistance_Record = game::data::AISubActionScaleDurationWithDistance_Record;
using AISubActionScaleDurationWithDistance_Record = game::data::AISubActionScaleDurationWithDistance_Record;
} // namespace RED4ext

// clang-format on
