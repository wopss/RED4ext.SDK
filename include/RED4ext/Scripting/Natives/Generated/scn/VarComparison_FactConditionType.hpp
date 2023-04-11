#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/InterruptFactConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/VarComparison_FactConditionTypeParams.hpp>

namespace RED4ext
{
namespace scn
{
struct VarComparison_FactConditionType : scn::InterruptFactConditionType
{
    static constexpr const char* NAME = "scnVarComparison_FactConditionType";
    static constexpr const char* ALIAS = NAME;

    scn::VarComparison_FactConditionTypeParams params; // 30
};
RED4EXT_ASSERT_SIZE(VarComparison_FactConditionType, 0x40);
} // namespace scn
using scnVarComparison_FactConditionType = scn::VarComparison_FactConditionType;
} // namespace RED4ext

// clang-format on
