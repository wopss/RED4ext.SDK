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
struct AISubActionActivateStrongArmsFX_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionActivateStrongArmsFX_Record";
    static constexpr const char* ALIAS = "AISubActionActivateStrongArmsFX_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionActivateStrongArmsFX_Record, 0x58);
} // namespace game::data
using gamedataAISubActionActivateStrongArmsFX_Record = game::data::AISubActionActivateStrongArmsFX_Record;
using AISubActionActivateStrongArmsFX_Record = game::data::AISubActionActivateStrongArmsFX_Record;
} // namespace RED4ext

// clang-format on
