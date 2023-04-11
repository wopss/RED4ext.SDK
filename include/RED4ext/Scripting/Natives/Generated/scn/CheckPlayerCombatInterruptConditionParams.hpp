#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct CheckPlayerCombatInterruptConditionParams
{
    static constexpr const char* NAME = "scnCheckPlayerCombatInterruptConditionParams";
    static constexpr const char* ALIAS = NAME;

    bool isInCombat; // 00
};
RED4EXT_ASSERT_SIZE(CheckPlayerCombatInterruptConditionParams, 0x1);
} // namespace scn
using scnCheckPlayerCombatInterruptConditionParams = scn::CheckPlayerCombatInterruptConditionParams;
} // namespace RED4ext

// clang-format on
