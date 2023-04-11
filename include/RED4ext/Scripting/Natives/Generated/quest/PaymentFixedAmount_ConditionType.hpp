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
struct PaymentFixedAmount_ConditionType : quest::IPayment_ConditionType
{
    static constexpr const char* NAME = "questPaymentFixedAmount_ConditionType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PaymentFixedAmount_ConditionType, 0x48);
} // namespace quest
using questPaymentFixedAmount_ConditionType = quest::PaymentFixedAmount_ConditionType;
} // namespace RED4ext

// clang-format on
