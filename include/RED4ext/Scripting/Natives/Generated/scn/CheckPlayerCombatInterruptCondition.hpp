#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CheckPlayerCombatInterruptConditionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptCondition.hpp>

namespace RED4ext
{
namespace scn { 
struct CheckPlayerCombatInterruptCondition : scn::IInterruptCondition
{
    static constexpr const char* NAME = "scnCheckPlayerCombatInterruptCondition";
    static constexpr const char* ALIAS = NAME;

    scn::CheckPlayerCombatInterruptConditionParams params; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(CheckPlayerCombatInterruptCondition, 0x38);
} // namespace scn
} // namespace RED4ext
