#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace scn
{
struct CheckTriggerInterruptConditionParams
{
    static constexpr const char* NAME = "scnCheckTriggerInterruptConditionParams";
    static constexpr const char* ALIAS = NAME;

    bool inside; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    NodeRef triggerArea; // 08
};
RED4EXT_ASSERT_SIZE(CheckTriggerInterruptConditionParams, 0x10);
} // namespace scn
using scnCheckTriggerInterruptConditionParams = scn::CheckTriggerInterruptConditionParams;
} // namespace RED4ext

// clang-format on
