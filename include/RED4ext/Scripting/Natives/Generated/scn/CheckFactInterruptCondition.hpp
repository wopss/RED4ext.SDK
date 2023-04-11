#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CheckFactInterruptConditionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptCondition.hpp>

namespace RED4ext
{
namespace scn
{
struct CheckFactInterruptCondition : scn::IInterruptCondition
{
    static constexpr const char* NAME = "scnCheckFactInterruptCondition";
    static constexpr const char* ALIAS = NAME;

    scn::CheckFactInterruptConditionParams params; // 30
};
RED4EXT_ASSERT_SIZE(CheckFactInterruptCondition, 0x40);
} // namespace scn
using scnCheckFactInterruptCondition = scn::CheckFactInterruptCondition;
} // namespace RED4ext

// clang-format on
