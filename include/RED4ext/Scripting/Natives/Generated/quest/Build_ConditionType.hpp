#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IStatsScriptConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Build_ConditionType : quest::IStatsScriptConditionType
{
    static constexpr const char* NAME = "questBuild_ConditionType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Build_ConditionType, 0x60);
} // namespace quest
using questBuild_ConditionType = quest::Build_ConditionType;
} // namespace RED4ext

// clang-format on
