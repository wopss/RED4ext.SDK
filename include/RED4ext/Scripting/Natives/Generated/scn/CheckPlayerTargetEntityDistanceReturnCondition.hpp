#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CheckPlayerTargetEntityDistanceReturnConditionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IReturnCondition.hpp>

namespace RED4ext
{
namespace scn
{
struct CheckPlayerTargetEntityDistanceReturnCondition : scn::IReturnCondition
{
    static constexpr const char* NAME = "scnCheckPlayerTargetEntityDistanceReturnCondition";
    static constexpr const char* ALIAS = NAME;

    scn::CheckPlayerTargetEntityDistanceReturnConditionParams params; // 30
};
RED4EXT_ASSERT_SIZE(CheckPlayerTargetEntityDistanceReturnCondition, 0x78);
} // namespace scn
using scnCheckPlayerTargetEntityDistanceReturnCondition = scn::CheckPlayerTargetEntityDistanceReturnCondition;
} // namespace RED4ext

// clang-format on
