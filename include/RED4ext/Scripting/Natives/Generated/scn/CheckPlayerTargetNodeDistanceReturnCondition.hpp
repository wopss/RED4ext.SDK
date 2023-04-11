#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CheckPlayerTargetNodeDistanceReturnConditionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IReturnCondition.hpp>

namespace RED4ext
{
namespace scn
{
struct CheckPlayerTargetNodeDistanceReturnCondition : scn::IReturnCondition
{
    static constexpr const char* NAME = "scnCheckPlayerTargetNodeDistanceReturnCondition";
    static constexpr const char* ALIAS = NAME;

    scn::CheckPlayerTargetNodeDistanceReturnConditionParams params; // 30
};
RED4EXT_ASSERT_SIZE(CheckPlayerTargetNodeDistanceReturnCondition, 0x48);
} // namespace scn
using scnCheckPlayerTargetNodeDistanceReturnCondition = scn::CheckPlayerTargetNodeDistanceReturnCondition;
} // namespace RED4ext

// clang-format on
