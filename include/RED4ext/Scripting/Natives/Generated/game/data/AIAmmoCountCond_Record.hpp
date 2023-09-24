#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AIAmmoCountCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIAmmoCountCond_Record";
    static constexpr const char* ALIAS = "AIAmmoCountCond_Record";

    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIAmmoCountCond_Record, 0x88);
} // namespace game::data
using gamedataAIAmmoCountCond_Record = game::data::AIAmmoCountCond_Record;
using AIAmmoCountCond_Record = game::data::AIAmmoCountCond_Record;
} // namespace RED4ext

// clang-format on
