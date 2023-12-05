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
struct AITargetStandingOnTopOfMovingVehicleCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAITargetStandingOnTopOfMovingVehicleCond_Record";
    static constexpr const char* ALIAS = "AITargetStandingOnTopOfMovingVehicleCond_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AITargetStandingOnTopOfMovingVehicleCond_Record, 0x68);
} // namespace game::data
using gamedataAITargetStandingOnTopOfMovingVehicleCond_Record = game::data::AITargetStandingOnTopOfMovingVehicleCond_Record;
using AITargetStandingOnTopOfMovingVehicleCond_Record = game::data::AITargetStandingOnTopOfMovingVehicleCond_Record;
} // namespace RED4ext

// clang-format on
