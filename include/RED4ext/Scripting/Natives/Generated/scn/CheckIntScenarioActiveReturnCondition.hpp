#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CheckIntScenarioActiveReturnConditionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IReturnCondition.hpp>

namespace RED4ext
{
namespace scn { 
struct CheckIntScenarioActiveReturnCondition : scn::IReturnCondition
{
    static constexpr const char* NAME = "scnCheckIntScenarioActiveReturnCondition";
    static constexpr const char* ALIAS = NAME;

    scn::CheckIntScenarioActiveReturnConditionParams params; // 30
};
RED4EXT_ASSERT_SIZE(CheckIntScenarioActiveReturnCondition, 0x40);
} // namespace scn
} // namespace RED4ext
