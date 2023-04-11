#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CheckPlayerTargetNodeDistanceInterruptConditionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptCondition.hpp>

namespace RED4ext
{
namespace scn
{
struct CheckPlayerTargetNodeDistanceInterruptCondition : scn::IInterruptCondition
{
    static constexpr const char* NAME = "scnCheckPlayerTargetNodeDistanceInterruptCondition";
    static constexpr const char* ALIAS = NAME;

    scn::CheckPlayerTargetNodeDistanceInterruptConditionParams params; // 30
};
RED4EXT_ASSERT_SIZE(CheckPlayerTargetNodeDistanceInterruptCondition, 0x48);
} // namespace scn
using scnCheckPlayerTargetNodeDistanceInterruptCondition = scn::CheckPlayerTargetNodeDistanceInterruptCondition;
} // namespace RED4ext

// clang-format on
