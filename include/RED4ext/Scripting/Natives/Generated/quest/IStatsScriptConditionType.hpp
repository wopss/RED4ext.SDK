#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IStatsConditionType.hpp>

namespace RED4ext
{
struct IScriptable;

namespace quest { 
struct IStatsScriptConditionType : quest::IStatsConditionType
{
    static constexpr const char* NAME = "questIStatsScriptConditionType";
    static constexpr const char* ALIAS = NAME;

    Handle<IScriptable> scriptCondition; // 38
    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(IStatsScriptConditionType, 0x50);
} // namespace quest
} // namespace RED4ext
