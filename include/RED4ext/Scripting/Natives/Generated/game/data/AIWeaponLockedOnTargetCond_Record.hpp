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
struct AIWeaponLockedOnTargetCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIWeaponLockedOnTargetCond_Record";
    static constexpr const char* ALIAS = "AIWeaponLockedOnTargetCond_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AIWeaponLockedOnTargetCond_Record, 0x68);
} // namespace game::data
using gamedataAIWeaponLockedOnTargetCond_Record = game::data::AIWeaponLockedOnTargetCond_Record;
using AIWeaponLockedOnTargetCond_Record = game::data::AIWeaponLockedOnTargetCond_Record;
} // namespace RED4ext

// clang-format on
