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
struct AISubActionDroneModifyAltitude_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionDroneModifyAltitude_Record";
    static constexpr const char* ALIAS = "AISubActionDroneModifyAltitude_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionDroneModifyAltitude_Record, 0x60);
} // namespace game::data
using gamedataAISubActionDroneModifyAltitude_Record = game::data::AISubActionDroneModifyAltitude_Record;
using AISubActionDroneModifyAltitude_Record = game::data::AISubActionDroneModifyAltitude_Record;
} // namespace RED4ext

// clang-format on
