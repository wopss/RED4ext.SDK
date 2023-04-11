#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ITimeConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct GameTimeDelay_ConditionType : quest::ITimeConditionType
{
    static constexpr const char* NAME = "questGameTimeDelay_ConditionType";
    static constexpr const char* ALIAS = NAME;

    uint32_t days; // 38
    uint32_t hours; // 3C
    uint32_t minutes; // 40
    uint32_t seconds; // 44
};
RED4EXT_ASSERT_SIZE(GameTimeDelay_ConditionType, 0x48);
} // namespace quest
using questGameTimeDelay_ConditionType = quest::GameTimeDelay_ConditionType;
} // namespace RED4ext

// clang-format on
