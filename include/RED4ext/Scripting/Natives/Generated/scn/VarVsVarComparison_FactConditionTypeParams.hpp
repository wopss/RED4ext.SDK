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
struct VarVsVarComparison_FactConditionTypeParams
{
    static constexpr const char* NAME = "scnVarVsVarComparison_FactConditionTypeParams";
    static constexpr const char* ALIAS = NAME;

    CName factName1; // 00
    CName factName2; // 08
    EComparisonType comparisonType; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(VarVsVarComparison_FactConditionTypeParams, 0x18);
} // namespace scn
using scnVarVsVarComparison_FactConditionTypeParams = scn::VarVsVarComparison_FactConditionTypeParams;
} // namespace RED4ext

// clang-format on
