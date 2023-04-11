#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IConditionType.hpp>

namespace RED4ext
{
struct IScriptable;

namespace quest
{
struct IPayment_ConditionType : quest::IConditionType
{
    static constexpr const char* NAME = "questIPayment_ConditionType";
    static constexpr const char* ALIAS = NAME;

    Handle<IScriptable> scriptCondition; // 38
};
RED4EXT_ASSERT_SIZE(IPayment_ConditionType, 0x48);
} // namespace quest
using questIPayment_ConditionType = quest::IPayment_ConditionType;
} // namespace RED4ext

// clang-format on
