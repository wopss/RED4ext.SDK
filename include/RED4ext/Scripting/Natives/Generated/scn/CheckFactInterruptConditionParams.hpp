#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace scn { struct InterruptFactConditionType; }

namespace scn
{
struct CheckFactInterruptConditionParams
{
    static constexpr const char* NAME = "scnCheckFactInterruptConditionParams";
    static constexpr const char* ALIAS = NAME;

    Handle<scn::InterruptFactConditionType> factCondition; // 00
};
RED4EXT_ASSERT_SIZE(CheckFactInterruptConditionParams, 0x10);
} // namespace scn
using scnCheckFactInterruptConditionParams = scn::CheckFactInterruptConditionParams;
} // namespace RED4ext

// clang-format on
