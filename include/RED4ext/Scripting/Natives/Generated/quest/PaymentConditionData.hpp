#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest
{
struct PaymentConditionData
{
    static constexpr const char* NAME = "questPaymentConditionData";
    static constexpr const char* ALIAS = NAME;

    bool isInverted; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    ItemID paymentItemId; // 04
    uint32_t paymentAmount; // 14
};
RED4EXT_ASSERT_SIZE(PaymentConditionData, 0x18);
} // namespace quest
using questPaymentConditionData = quest::PaymentConditionData;
} // namespace RED4ext

// clang-format on
