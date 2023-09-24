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
struct AIIsFromPreventionSystem_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIIsFromPreventionSystem_Record";
    static constexpr const char* ALIAS = "AIIsFromPreventionSystem_Record";

};
RED4EXT_ASSERT_SIZE(AIIsFromPreventionSystem_Record, 0x58);
} // namespace game::data
using gamedataAIIsFromPreventionSystem_Record = game::data::AIIsFromPreventionSystem_Record;
using AIIsFromPreventionSystem_Record = game::data::AIIsFromPreventionSystem_Record;
} // namespace RED4ext

// clang-format on
