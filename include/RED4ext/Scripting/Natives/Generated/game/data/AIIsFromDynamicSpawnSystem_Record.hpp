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
struct AIIsFromDynamicSpawnSystem_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAIIsFromDynamicSpawnSystem_Record";
    static constexpr const char* ALIAS = "AIIsFromDynamicSpawnSystem_Record";

};
RED4EXT_ASSERT_SIZE(AIIsFromDynamicSpawnSystem_Record, 0x58);
} // namespace game::data
using gamedataAIIsFromDynamicSpawnSystem_Record = game::data::AIIsFromDynamicSpawnSystem_Record;
using AIIsFromDynamicSpawnSystem_Record = game::data::AIIsFromDynamicSpawnSystem_Record;
} // namespace RED4ext

// clang-format on
