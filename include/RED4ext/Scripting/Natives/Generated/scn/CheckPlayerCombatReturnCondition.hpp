#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CheckPlayerCombatReturnConditionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IReturnCondition.hpp>

namespace RED4ext
{
namespace scn
{
struct CheckPlayerCombatReturnCondition : scn::IReturnCondition
{
    static constexpr const char* NAME = "scnCheckPlayerCombatReturnCondition";
    static constexpr const char* ALIAS = NAME;

    scn::CheckPlayerCombatReturnConditionParams params; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(CheckPlayerCombatReturnCondition, 0x38);
} // namespace scn
using scnCheckPlayerCombatReturnCondition = scn::CheckPlayerCombatReturnCondition;
} // namespace RED4ext

// clang-format on
