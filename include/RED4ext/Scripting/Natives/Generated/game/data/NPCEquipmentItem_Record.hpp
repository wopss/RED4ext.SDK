#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/NPCEquipmentGroupEntry_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct NPCEquipmentItem_Record : game::data::NPCEquipmentGroupEntry_Record
{
    static constexpr const char* NAME = "gamedataNPCEquipmentItem_Record";
    static constexpr const char* ALIAS = "NPCEquipmentItem_Record";

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(NPCEquipmentItem_Record, 0x88);
} // namespace game::data
using gamedataNPCEquipmentItem_Record = game::data::NPCEquipmentItem_Record;
using NPCEquipmentItem_Record = game::data::NPCEquipmentItem_Record;
} // namespace RED4ext

// clang-format on
