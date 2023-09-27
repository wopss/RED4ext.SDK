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
struct AISubActionForceUnequip_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionForceUnequip_Record";
    static constexpr const char* ALIAS = "AISubActionForceUnequip_Record";

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionForceUnequip_Record, 0x90);
} // namespace game::data
using gamedataAISubActionForceUnequip_Record = game::data::AISubActionForceUnequip_Record;
using AISubActionForceUnequip_Record = game::data::AISubActionForceUnequip_Record;
} // namespace RED4ext

// clang-format on
