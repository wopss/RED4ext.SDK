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
struct AISubActionQuickHack_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionQuickHack_Record";
    static constexpr const char* ALIAS = "AISubActionQuickHack_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionQuickHack_Record, 0x70);
} // namespace game::data
using gamedataAISubActionQuickHack_Record = game::data::AISubActionQuickHack_Record;
using AISubActionQuickHack_Record = game::data::AISubActionQuickHack_Record;
} // namespace RED4ext

// clang-format on
