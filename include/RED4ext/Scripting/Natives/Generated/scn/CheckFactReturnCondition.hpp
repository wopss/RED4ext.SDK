#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CheckFactReturnConditionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IReturnCondition.hpp>

namespace RED4ext
{
namespace scn
{
struct CheckFactReturnCondition : scn::IReturnCondition
{
    static constexpr const char* NAME = "scnCheckFactReturnCondition";
    static constexpr const char* ALIAS = NAME;

    scn::CheckFactReturnConditionParams params; // 30
};
RED4EXT_ASSERT_SIZE(CheckFactReturnCondition, 0x40);
} // namespace scn
using scnCheckFactReturnCondition = scn::CheckFactReturnCondition;
} // namespace RED4ext

// clang-format on
