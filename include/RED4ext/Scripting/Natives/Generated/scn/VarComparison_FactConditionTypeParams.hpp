#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>

namespace RED4ext
{
namespace scn
{
struct VarComparison_FactConditionTypeParams
{
    static constexpr const char* NAME = "scnVarComparison_FactConditionTypeParams";
    static constexpr const char* ALIAS = NAME;

    CName factName; // 00
    int32_t value; // 08
    EComparisonType comparisonType; // 0C
};
RED4EXT_ASSERT_SIZE(VarComparison_FactConditionTypeParams, 0x10);
} // namespace scn
using scnVarComparison_FactConditionTypeParams = scn::VarComparison_FactConditionTypeParams;
} // namespace RED4ext

// clang-format on
