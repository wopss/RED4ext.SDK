#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct CreditsForceStopped_ConditionType : quest::IUIConditionType
{
    static constexpr const char* NAME = "questCreditsForceStopped_ConditionType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CreditsForceStopped_ConditionType, 0x38);
} // namespace quest
using questCreditsForceStopped_ConditionType = quest::CreditsForceStopped_ConditionType;
} // namespace RED4ext

// clang-format on
