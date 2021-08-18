#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CheckPlayerTargetEntityDistanceInterruptConditionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptCondition.hpp>

namespace RED4ext
{
namespace scn { 
struct CheckPlayerTargetEntityDistanceInterruptCondition : scn::IInterruptCondition
{
    static constexpr const char* NAME = "scnCheckPlayerTargetEntityDistanceInterruptCondition";
    static constexpr const char* ALIAS = NAME;

    scn::CheckPlayerTargetEntityDistanceInterruptConditionParams params; // 30
};
RED4EXT_ASSERT_SIZE(CheckPlayerTargetEntityDistanceInterruptCondition, 0x78);
} // namespace scn
} // namespace RED4ext
