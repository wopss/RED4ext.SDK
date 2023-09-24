#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AITicketFilter_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISquadSpatialForOwnTarget_Record : game::data::AITicketFilter_Record
{
    static constexpr const char* NAME = "gamedataAISquadSpatialForOwnTarget_Record";
    static constexpr const char* ALIAS = "AISquadSpatialForOwnTarget_Record";

    uint8_t unk80[0x90 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(AISquadSpatialForOwnTarget_Record, 0x90);
} // namespace game::data
using gamedataAISquadSpatialForOwnTarget_Record = game::data::AISquadSpatialForOwnTarget_Record;
using AISquadSpatialForOwnTarget_Record = game::data::AISquadSpatialForOwnTarget_Record;
} // namespace RED4ext

// clang-format on
