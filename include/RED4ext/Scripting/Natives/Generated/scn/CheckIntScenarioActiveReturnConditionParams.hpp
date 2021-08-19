#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>

namespace RED4ext
{
namespace scn { 
struct CheckIntScenarioActiveReturnConditionParams
{
    static constexpr const char* NAME = "scnCheckIntScenarioActiveReturnConditionParams";
    static constexpr const char* ALIAS = NAME;

    CName intScenarioName; // 00
    uint32_t value; // 08
    EComparisonType comparisonType; // 0C
};
RED4EXT_ASSERT_SIZE(CheckIntScenarioActiveReturnConditionParams, 0x10);
} // namespace scn
} // namespace RED4ext
