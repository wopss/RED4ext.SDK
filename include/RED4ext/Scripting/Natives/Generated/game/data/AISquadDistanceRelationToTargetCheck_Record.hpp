#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicketCheck_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISquadDistanceRelationToTargetCheck_Record : game::data::AITicketCheck_Record
{
    static constexpr const char* NAME = "gamedataAISquadDistanceRelationToTargetCheck_Record";
    static constexpr const char* ALIAS = "AISquadDistanceRelationToTargetCheck_Record";

    uint8_t unk68[0x80 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AISquadDistanceRelationToTargetCheck_Record, 0x80);
} // namespace game::data
using gamedataAISquadDistanceRelationToTargetCheck_Record = game::data::AISquadDistanceRelationToTargetCheck_Record;
using AISquadDistanceRelationToTargetCheck_Record = game::data::AISquadDistanceRelationToTargetCheck_Record;
} // namespace RED4ext

// clang-format on
