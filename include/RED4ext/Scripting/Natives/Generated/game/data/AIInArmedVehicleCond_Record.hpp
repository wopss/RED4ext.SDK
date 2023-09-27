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
struct AIInArmedVehicleCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIInArmedVehicleCond_Record";
    static constexpr const char* ALIAS = "AIInArmedVehicleCond_Record";

};
RED4EXT_ASSERT_SIZE(AIInArmedVehicleCond_Record, 0x58);
} // namespace game::data
using gamedataAIInArmedVehicleCond_Record = game::data::AIInArmedVehicleCond_Record;
using AIInArmedVehicleCond_Record = game::data::AIInArmedVehicleCond_Record;
} // namespace RED4ext

// clang-format on
