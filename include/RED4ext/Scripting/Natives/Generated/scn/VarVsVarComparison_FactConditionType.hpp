#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/InterruptFactConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/VarVsVarComparison_FactConditionTypeParams.hpp>

namespace RED4ext
{
namespace scn
{
struct VarVsVarComparison_FactConditionType : scn::InterruptFactConditionType
{
    static constexpr const char* NAME = "scnVarVsVarComparison_FactConditionType";
    static constexpr const char* ALIAS = NAME;

    scn::VarVsVarComparison_FactConditionTypeParams params; // 30
};
RED4EXT_ASSERT_SIZE(VarVsVarComparison_FactConditionType, 0x48);
} // namespace scn
using scnVarVsVarComparison_FactConditionType = scn::VarVsVarComparison_FactConditionType;
} // namespace RED4ext

// clang-format on
