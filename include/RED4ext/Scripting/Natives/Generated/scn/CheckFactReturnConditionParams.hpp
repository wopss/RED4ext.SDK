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
struct CheckFactReturnConditionParams
{
    static constexpr const char* NAME = "scnCheckFactReturnConditionParams";
    static constexpr const char* ALIAS = NAME;

    Handle<scn::InterruptFactConditionType> factCondition; // 00
};
RED4EXT_ASSERT_SIZE(CheckFactReturnConditionParams, 0x10);
} // namespace scn
using scnCheckFactReturnConditionParams = scn::CheckFactReturnConditionParams;
} // namespace RED4ext

// clang-format on
