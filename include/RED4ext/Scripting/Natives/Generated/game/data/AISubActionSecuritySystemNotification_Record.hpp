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
struct AISubActionSecuritySystemNotification_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionSecuritySystemNotification_Record";
    static constexpr const char* ALIAS = "AISubActionSecuritySystemNotification_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionSecuritySystemNotification_Record, 0x60);
} // namespace game::data
using gamedataAISubActionSecuritySystemNotification_Record = game::data::AISubActionSecuritySystemNotification_Record;
using AISubActionSecuritySystemNotification_Record = game::data::AISubActionSecuritySystemNotification_Record;
} // namespace RED4ext

// clang-format on
