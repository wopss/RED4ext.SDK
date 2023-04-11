#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPayment_ConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct PaymentBalanced_ConditionType : quest::IPayment_ConditionType
{
    static constexpr const char* NAME = "questPaymentBalanced_ConditionType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PaymentBalanced_ConditionType, 0x48);
} // namespace quest
using questPaymentBalanced_ConditionType = quest::PaymentBalanced_ConditionType;
} // namespace RED4ext

// clang-format on
